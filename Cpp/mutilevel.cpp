#include<iostream>
using namespace std;

class College{
    public:
    string departments[5]= {"ECE","MECH","Civil","IT","CSE"};
};
class Staffs:public College{
    string staff = "Masters";
};
class student:public Staffs{
    
};