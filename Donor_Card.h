#ifndef DONORCARD_H
#define DONORCARD_H

#include<iostream>
#include<string>
#include<ctime>
#include "Blood_Group.h"
using namespace std;

class Donorcard: public BloodGroup {
private:
    string donorID;
    string ownerName;
    string donationDate;
    string AadharNo;
    string phnNo;
    string email;
public:
    void setOwnerName(string oName);
    void setDonationDate(string d);
    void setAadhar(string adhr);
    void setPhone(string phone);
    void setEmail(string Email);
    void setDonorID();
    string getOwnerName();
    string getDonationDate();
    string getAadhar();
    string getPhone();
    string getEmail();
    string getDonorID();
};

void Donorcard::setOwnerName(string oName) {
    ownerName=oName;
}

void Donorcard::setAadhar(string adhr) {
    AadharNo=adhr;
}

void Donorcard::setDonationDate(string d) {
    donationDate=d;
}

void Donorcard::setPhone(string phone){
    phnNo=phone;
}

void Donorcard::setEmail(string Email){
    email=Email;
}

void Donorcard::setDonorID() {
    static const char alphanum[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
    int len = sizeof(alphanum) - 1, n = 10;
    string ID="";
    srand(time(0));
    for(int z = 0; z < n; z++) {
        ID+=alphanum[rand() % len];
    }
    donorID = ID;
}

string Donorcard::getDonationDate() {
    return donationDate;
}

string Donorcard::getOwnerName() {
    return ownerName;
}

string Donorcard::getAadhar() {
    return AadharNo;
}

string Donorcard::getPhone() {
    return phnNo;
}

string Donorcard::getEmail() {
    return email;
}

string Donorcard::getDonorID() {
    return donorID;
}

#endif
