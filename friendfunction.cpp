#include<iostream>
using namespace std;

class A{
    private:
        int x;
    public:
        A(int y){
            x = y;
        }
        friend void print(A &obj);
};

void print(A& obj){
    cout<<obj.x<<endl;
}

int main(){
    A obj(10);
    print(obj);
    return 0;
}

//Output: 10