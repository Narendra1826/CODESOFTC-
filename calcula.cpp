#include<iostream>
using namespace std;
int main()
{
    int choice;
    double a,b;
    cout<<"Welcome to the Calculator!"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"Choose your choice:";
    cin>>choice;

    //using the switch case perform the operation
    switch(choice)
    {
        case 1:
            cout<<"Your choice is Addition."<<endl;
            cout<<"Enter the two numbers: ";
            cin>>a>>b;
            cout<<"Addition= "<<a+b<<endl;
            break;
    
        case 2:
            cout<<"Your choice is Subtraction."<<endl;
            cout<<"Enter the two numbers: ";
            cin>>a>>b;
            cout<<"Subtraction= "<<a-b<<endl;
            break;

        case 3:
            cout<<"Your choice is Multiplication."<<endl;
            cout<<"Enter the two numbers: ";
            cin>>a>>b;
            cout<<"Multiplication= "<<a*b<<endl;
            break;
        case 4:
            cout<<"Your choice is Division."<<endl;
            cout<<"Enter the two numbers: ";
            cin>>a>>b;
            cout<<"Division= "<<a/b<<endl;
            break;
        
        default: 
            cout<<"Invalid choice! Try Again."<<endl;
            break;
    }
    return 0;
}