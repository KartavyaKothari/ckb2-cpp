#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Cons of A"<<endl;
    }
    ~A(){
        cout<<"Des of A"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"Cons of B"<<endl;
    }
    ~B(){
        cout<<"Des of B"<<endl;
    }
};
class C: public B, public A{
    public:
    C(){
        cout<<"Cons of C"<<endl;
    }
    ~C(){
        cout<<"Des of C"<<endl;
    }
};

void func(){
    cout<<"Func begins"<<endl;
    C c;
    cout<<"Func ends"<<endl;
}

int main(){
    cout<<"In main before caling func"<<endl;
    func();
    cout<<"Outside func, in main"<<endl;

    return 0;
}