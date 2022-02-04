#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void show(){
        cout<<"Showing from parent"<<endl;
    }
    void print(){
        cout<<"Printing from parent"<<endl;
    }
};

class B: public A{
    public:
    void show(){
        cout<<"Showing from child"<<endl;
    }
    void print(){
        cout<<"Printing from child"<<endl;
    }
};

int main(){
    B *b = new B();
    // b->show();
    // b->print();

    A *a; 
    a = b;
    a->show();
    a->print();

    return 0;
}