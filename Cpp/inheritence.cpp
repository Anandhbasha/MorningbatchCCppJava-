#include<iostream>
using namespace std;

class Father{
    protected:
    string property = "House";
};
class Son:public Father{
    public:
    string share(){
        return property;
    }
};

int main(){
    Son s = Son();
    cout<<s.share();
}