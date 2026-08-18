#include <iostream>
using namespace std;
class Bikes{
    public:
    int bikeMilage = 50;
    string bikeName = "Honda";
    string bikeVarientName = "Unicorn";
    string bikeColor= "Red";
    int BikenoofWheels = 2;
    int BiketoSpeed = 120;

    void bikeAcc(){
        cout<<"Bike1 Moves";
    }
    void BikeBreak(string names){
        cout<<names<<"Stops";
    }

};

int main(){
    // Object or instense
    Bikes b1 = Bikes();
    cout<<b1.bikeMilage << endl;
    cout<<b1.bikeName;
    Bikes b2 = Bikes();
    b2.bikeColor = "Black";
    cout<<b2.bikeMilage << endl;
    cout<<b2.bikeName << endl;
    cout<<b2.bikeVarientName << endl;
    cout<<b2.bikeColor << endl;
    cout<<b2.BikenoofWheels << endl;
    cout<<b2.BiketoSpeed << endl;
    b2.BikeBreak("Activa");
}

// access specifiers