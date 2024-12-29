#include<iostream>
using namespace std;

class Fruit {
    public:
        string name;
        string colour;
};

int main(){
    Fruit apple; //object
    apple.name = "Apple";
    apple.colour = "Red";
    cout<<apple.name<<" - "<<apple.colour<<endl; //dot operator 

    Fruit *mango = new Fruit(); //object using new keyword --> pointer to object
    mango->name = "Mango"; //arrow operator
    mango->colour = "Yellow";
    cout<<mango->name<<" - "<<mango->colour<<endl;

    return 0;
}

/* Output:
Apple - Red
Mango - Yellow */