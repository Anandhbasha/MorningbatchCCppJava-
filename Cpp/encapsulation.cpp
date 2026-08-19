#include<iostream>
using namespace std;

class BankAccount{
    private:
    double balance = 5000;
    public:
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        balance-=amount;
    }
    double showBalance(){
        return balance;
    }
};

int main(){
    BankAccount acc1 = BankAccount();
    cout<<"The avalible Balance is:"<<acc1.showBalance()<< endl;
    acc1.deposit(15000);
    cout<<"The avalible Balance is:"<<acc1.showBalance()<< endl;
    acc1.withdraw(2000);
    cout<<"The avalible Balance is:"<<acc1.showBalance()<< endl;

}