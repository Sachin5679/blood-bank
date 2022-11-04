#include<iostream>
#include<iomanip>
#include<windows.h>
#include "Blood_Bank.h"
using namespace std;

int main(){
    BloodBank bb;
    while(1){
        int ch;

        cout<<"--------------------------------------"<<endl;
        cout<<"|    Blood Bank Management System    |"<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"\nEnter your choice:\n\t1. Add New Donor\n\t2. Display Donor List\n\t3. Search for Donor\n\t4. Update Donor Details\n\t5. Exit"<<endl;
        cin>>ch;

        switch(ch) {
        case 1:
        {
            system("cls");
            bb.bloodBank("Add Donor");
        }
        break;
        case 2:
        {
            system("cls");
            bb.bloodBank("Display Donor List");
        }
        break;
        case 3:
        {
            system("cls");
            bb.bloodBank("Search for Donor");
        }
        break;

        case 4:
        {
            system("cls");
            bb.bloodBank("Update Donor Details");
        }
        break;
        
        case 5:
        {
            return 0;
        }
        break;
        default:
        {
            system("cls");
            cout<<"Enter valid choice!"<<endl;
        }  
        break;
        }
    }
    return 0;
}
