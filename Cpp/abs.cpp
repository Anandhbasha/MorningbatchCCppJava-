#include<iostream>
using namespace std;

class Loan{
    public:
    virtual void rateOfIntrest() = 0;
};
class HDFC:public Loan{
    public:
    void rateOfIntrest(){
        cout<<"HDFC Rate if Intrest is 6.5";
    }
};
class SBI:public Loan{
    public:
    void rateOfIntrest(){
        cout<<"HDFC Rate if Intrest is 6.1";
    }
};
int main(){
    HDFC roi = HDFC();
    roi.rateOfIntrest();
    SBI ROI = SBI();
    ROI.rateOfIntrest(); 
}