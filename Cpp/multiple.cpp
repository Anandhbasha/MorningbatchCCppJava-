#include <iostream>
using namespace std;

class Director{
    public:
    string profession1 = "Director";
    void show(){
        cout<<"He is Director"<< endl;
    }
};

class Actor{
    public:
    string profession = "Actor";
    void show(){
        cout<<"He is Actor"<< endl;
    }
};
class Singer{
    public:
    string profession = "Singer";
    void show(){
        cout<<"He is Singer"<< endl;
    }
};

class PR:public Director,public Actor,public Singer{};

int main(){
    PR  p ;
    cout<<p.Actor::profession << endl;
    p.Actor::show();
}