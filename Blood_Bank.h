#ifndef BLOOD_BANK_DONOR_H
#define BLOOD_BANK_DONOR_H

#include<iostream>
#include<iomanip>
#include<string>
#include<windows.h>
#include "Donor_Card.h"

using namespace std;

class BloodBank {
    protected:
        Donorcard dc[100];
    public:
        void bloodBank(string s);
};

void BloodBank::bloodBank(string s) {
    static int i = 0;
    if (s == "Add Donor") {
        string n,m;
        dc[i].setDonorID();

        
        cout<<"Enter name: ";
        getchar();
        getline(cin>>n,m);
        dc[i].setOwnerName(n+" "+m);


        cout<<"Enter donation date: ";
        cin>>n;
        dc[i].setDonationDate(n);

        cout<<"Enter Aadhar number: ";
        cin>>n;
        dc[i].setAadhar(n);

        cout<<"Enter Blood Group: ";
        cin>>n;
        dc[i].setBloodGroup(n);
        
        cout<<"Enter Phone number: ";
        cin>>n;
        dc[i].setPhone(n);

        cout<<"Enter Email-ID: ";
        cin>>n;
        dc[i].setEmail(n);

        i++;
        cout<<"Donor details added successfully!";
        system("cls");
    }

    else if (s == "Display Donor List") {
        system("cls");
        int j;
        for (j=0; j<i; j++){
            cout<<"Donor ID: "<<dc[j].getDonorID()<<endl;
            cout<<"Donor name: "<<dc[j].getOwnerName()<<endl;
            cout<<"Donation date: "<<dc[j].getDonationDate()<<endl;
            cout<<"Aadhar number: "<<dc[j].getAadhar()<<endl;
            cout<<"Blood group: "<<dc[j].getBloodGroup()<<endl<<endl;
            cout<<"Phone number: "<<dc[j].getPhone()<<endl;
            cout<<"Email-ID: "<<dc[j].getEmail()<<endl;
            cout<<"-----------------------------"<<endl;
            // system("pause");
            // system("cls");
        }
        system("pause");
        system("cls");
        if(j<1)
            cout<<"Directory is empty!";
    }

    else if (s == "Search for Donor") {
        string sea;
        system("cls");
        cout<<"Enter blood group to search for Donor"<<endl;
        cin>>sea;
        for (int j=0; j<i; j++) {
            if (sea==dc[j].getBloodGroup()) {
                cout<<"Donor ID: "<<dc[j].getDonorID()<<endl;
                cout<<"Donor name: "<<dc[j].getOwnerName()<<endl;
                cout<<"Donation date: "<<dc[j].getDonationDate()<<endl;
                cout<<"Aadhar number: "<<dc[j].getAadhar()<<endl;
                cout<<"Blood group: "<<dc[j].getBloodGroup()<<endl;
                cout<<"Phone number: "<<dc[j].getPhone()<<endl;
                cout<<"Email-ID: "<<dc[j].getEmail()<<endl<<endl;
                system("pause");
                system("cls");
            }
            /*else {
                cout<<"Not found."<<endl;
            }*/
        }
    }

    else if (s=="Update Donor Details") {
        string upd;
        int ch;
        system("cls");
        cout<<"Enter Donor ID to update details"<<endl;
        cin>>upd;
        for (int j=0; j<i; j++)
        {
            if (upd==dc[j].getDonorID()) {
                cout<<"Which detail do you want to update?"<<endl;
                cout<<"1-Phone number"<<endl;
                cout<<"2-Email ID"<<endl;
                cout<<"Enter choice: ";
                cin>>ch;
                if (ch==1)
                {
                    string newPhn;
                    cout<<"Enter new phone number: ";
                    cin>>newPhn;
                    dc[j].setPhone(newPhn);
                    cout<<"New Phone number: "<<dc[j].getPhone()<<endl;
                }
                else if (ch==2)
                {
                    string newEmail;
                    cout<<"Enter new email: ";
                    cin>>newEmail;
                    dc[j].setEmail(newEmail);
                    cout<<"New Email-ID: "<<dc[j].getEmail()<<endl;
                }
            }
            /*else {
                cout<<"No entry with this ID exists."<<endl;
            }*/
        }

    }
}

#endif
