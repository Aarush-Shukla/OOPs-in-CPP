#include<iostream>
using namespace std;

class Parent{
    public:
        // Parent(){
        //     cout<<"Parent Class"<<endl;
        // }
        void display(){              //CompileTime Polymorphism
            cout<<"Parent"<<endl;
        }
        // virtual void display(){   //Runtime Polymorphism
        //     cout<<"Parent"<<endl;
        // }
};


class Child1: virtual public Parent{
    public:
        // Child1(){
        //     cout<<"Child1 Class"<<endl;
        // }
        void display(){
            cout<<"Child1"<<endl;
        }
};

class Child2: virtual public Parent{
    public:
        // Child2(){
        //     cout<<"Child2 Class"<<endl;
        // }
        void display(){
            cout<<"Child2"<<endl;
        }
};

class Grandchild: public Child1, public Child2{
    public:
        // Grandchild(){
        //     cout<<"Grandchild Class"<<endl;
        // }
        void display(){
            cout<<"Grandchild"<<endl;
        }
};

int main(){
    Grandchild C;
    C.display(); // Grandchild
    Parent *p=new Grandchild();
    p->display();// if void display in parent -> Parent, if virtual void display in parent-> Grandchild
    return 0;
}

/* Output:
Parent Class
Child1 Class
Parent Class
Child2 Class
Grandchild Class
*/
