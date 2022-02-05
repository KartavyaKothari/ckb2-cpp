#include<bits/stdc++.h>
using namespace std;

#define WITH 1
#define DEP 0

class Person{};
class Transaction{
    public:
    int trans_type;
    int amount;

    void display(){
        if(trans_type == WITH){
            cout<<"Money withdrawn: "<<amount<<endl;
        }else{
            cout<<"Money deposited: "<<amount<<endl;
        }
    }

    Transaction(int type, int amt){
        trans_type = type;
        amount = amt;
    }
    Transaction(){}
};

class Account: public Transaction{
    string acc_no;
    int balance;
    int pin;
    bool is_logged_in;

    vector<Transaction> statement;

    public:
    Account(){}
    Account(string acc_no, int pin, int balance){
        this->acc_no = acc_no;
        this->pin = pin;
        this->balance = balance;
        is_logged_in = false;
    }

    protected:
    void print_statement(){
        for(auto stmt: statement){
            stmt.display();
        }
    }

    bool log_in(){
        int p;
        cout<<"Enter pin: ";
        cin>>p;
        if(p == pin){
            cout<<"Sucessfully logged in"<<endl;
            is_logged_in = true;
        }

        return is_logged_in;
    }

    int check_balance(){
        if(!is_logged_in) return -1;
        is_logged_in = false;
        return balance;

    }

    void change_pin(){
        if(!is_logged_in) return;

        int pin1, pin2;
        cout<<"Enter new pin: ";
        cin>>pin1;
        cout<<"Enter pin again: ";
        cin>>pin2;
        if(pin1 != pin2){
            cout<<"Entered pin doesnt match"<<endl;
            return;
        }

        this->pin = pin1;
        cout<<"Pin changed sucessfully"<<endl;
        is_logged_in = false;
    }

    void deposit(int amt){
        if(!is_logged_in) return;

        balance+=amt;
        statement.push_back(Transaction(DEP,amt));
        cout<<"Your new balance is "<<balance<<endl;
        is_logged_in = false;
    }

    void withdraw(int amt){
        if(!is_logged_in) return;

        if(amt>balance){
            cout<<"Invalid amt"<<endl;
            is_logged_in = false;
            return;
        }

        balance-=amt;
        statement.push_back(Transaction(WITH,amt));
        cout<<"Your new balance is "<<balance<<endl;
        is_logged_in = false;
    }
};

class Bank: Account{
    unordered_map<string,Account> account_recs;

    public:
    Bank(){
        
    }
    void create_account(){
        string acc_no;
        cout<<"Enter acc no: ";
        cin>>acc_no;
        int pin;
        cout<<"Enter pin: ";
        cin>>pin;

        Account acc(acc_no,pin,0);
        account_recs[acc_no] = acc;
    }

    void acc_deletion(){
        string acc_no;
        cout<<"Enter acc no: ";
        cin>>acc_no;
        int pin;
        cout<<"Enter pin: ";
        cin>>pin;

        if(account_recs.find(acc_no) != account_recs.end()){
            account_recs.erase(acc_no);
            cout<<"Erase sucessfull"<<endl;
        }else{
            cout<<"Account not found"<<endl;
        }
    }

    void acc_log_in(){
        string acc_no;
        cout<<"Enter acc no: ";
        cin>>acc_no;
        int pin;
        cout<<"Enter pin: ";
        cin>>pin;

        // while(true){
        //     cout<<""
        // }
    }
};

int main(){
    // Account creation
    // Account deletion
    // Deposit / Withdrawl
    // Transaction history for each account
    // Log in log out
    // Account details
}