// #pragma once
#ifndef MYHEADEFILE_H
#define MYHEADEFILE_H

//#include <string>
#include "helper/helper.hpp"

class BankAccount {
public:
    BankAccount() {
        BankAccount::initialNumber = "00020101021";
    };
    BankAccount(const std::string& initialNumber, const std::string& accountNumber, const std::string& accountName, const std::string& bankName) {
        BankAccount::setAccountName(accountName);
        BankAccount::setAccountNumber(accountNumber);
        BankAccount::setBankName(bankName);
        BankAccount::setInitialNumber(initialNumber);
    };

    bool setInitialNumber(const std::string& newInitialNumber) {
        BankAccount::initialNumber = newInitialNumber;
        return true;
    };
    std::string getInitialNumber() {
        return initialNumber;
    };

    bool setAccountNumber(const std::string& newAccountNumber, bool ignoreChecking = false) {
        BankAccount::accountNumber = newAccountNumber;
        ignoreChecking = true;
        return ignoreChecking;
    };
    std::string getAccountNumber() {

        return accountNumber;
    };

    bool setAccountName(const std::string& newAccountName, bool ignoreChecking = false) {
        BankAccount::accountName = newAccountName;
        ignoreChecking = true;
        return ignoreChecking;
    };
    std::string getAccountName() {

        return accountName;
    };

    bool setBankName(const std::string& newBankName) {
        BankAccount::bankName = newBankName;
        return true;
    };
    std::string getBankName() {
        return bankName;
    };

    std::string encode(const std::string& BName) {
        for (int i = 0; i < BName.size(); i++) {
            if (BName[i] ) {
            }
        }
    }
    std::string getEncodedAccountNumber() {
        return encode(BankAccount::bankName);
    };
    std::string getEncodedAccountName() {
        return "yes";
    };

    std::string buildMessageForQR(const std::string& createdAt) {
        return "yes";
    };

private:
    std::string initialNumber;
    std::string accountNumber;
    std::string accountName;
    std::string bankName;
};

class BankQR {
public:
    // static BankQR encode(string message);
    BankQR(const std::string& message) {
        
    };
    ~BankQR() {
    
    };

    bool saveToPNG(const std::string& filename) {
        return true;
    };

    std::string toString() {
        return "yes";
    };
    std::string toString(int margin) {
        return "yes";
    };

    bool saveStringTo(const std::string& filename, int margin = 0) {
        return true;
    }

    static std::string decodePNG(const std::string& filename) {
        return "yes";
    };

    static std::string decodeInfoOfMessage(const std::string& message) {
        return "yes";
    };

    //static BankQR convert(const BankQR& inQR, const std::string& targetBank);

private:
    /*
     * Propose your attributes
     *
     */
};

// BankAccount::BankAccount(){
//     BankAccount::initialNumber = "00020101021";
// }

// BankAccount::BankAccount(const std::string & initialNumber, const std::string & accountNumber, const std::string & accountName, const std::string & bankName){
//     setAccountName(accountName);
//     setAccountNumber(accountNumber);
//     setBankName(bankName);
//     setInitialNumber(initialNumber);
// }


#endif