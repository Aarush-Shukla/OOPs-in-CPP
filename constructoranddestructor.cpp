#include<iostream>
using namespace std;

class Rectangle {
    public:
        int l;
        int b;

        Rectangle(){ //Default Constructor
            l = 0;
            b = 0;
        }

        Rectangle(int x, int y){ //Parameterised Constructor
            l = x;
            b = y;
        }

        Rectangle(Rectangle& r){ //Copy Constructor
            l = r.l;
            b = r.b;
        }

        ~Rectangle(){ //Destructor
            cout<<"Destructor is called!"<<endl;
        }
};

int main(){
    Rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;

    Rectangle r2(3, 4);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle *r4 = new Rectangle(2, 5);
    cout<<r4->l<<" "<<r4->b<<endl;
    delete r4;

    Rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;
}

/* Output:
0 0
3 4
2 5
Destructor is called!
3 4
Destructor is called!  // At the end of main(), all stack-allocated objects are destroyed in reverse order of creation: //r3 (copy of r2) is destroyed
Destructor is called!  //r2 is destroyed
Destructor is called!  //r1 is destroyed  */
