#include "StudentManager.h"
#include<iostream>
#include<fstream>

using namespace std;

void StudentManager::addStudent(){
    ofstream file("data/students.txt",ios::app);

    if(!file){
        cout<<"Error opening file!"<<endl;
        return;
    }
    int id,age;
    string name;
    cout<<"Enter Student ID: ";
    cin>>id;
    cout<<"Enter Student Name: ";
    cin>>name;
    cout<<"Enter Student Age: ";
    cin>>age;
    file<<id<<" "<<name<<" "<<age<<endl;
    file.close();
    cout<<"Student added successfully!"<<endl;
}

void StudentManager::viewStudent(){
    ifstream file("data/students.txt");

    if(!file){
        cout<<"Error opening file!"<<endl;
        return;
    }
    int id,age;
    string name;
    cout<<"Student List:"<<endl;
    while(file>>id>>name>>age){
        cout<<"ID: "<<id<<", Name: "<<name<<", Age: "<<age<<endl;
    }
    file.close();
}