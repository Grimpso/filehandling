#include "StudentManager.h"
#include<iostream>

using namespace std;

int main(){
    StudentManager sm;
    int choice;

    do{
        cout<<"\n1. Add Student"<<endl;
        cout<<"\n2. View Students"<<endl;
        cout<<"\n3. Exit\n";
        cout<<"Enter choice:";
        cin>>choice;
        switch(choice){
            case 1:
                sm.addStudent();
                break;
            case 2: 
                sm.viewStudent();
                break;
        }
    }
    while(choice!=3);

    return 0;
}