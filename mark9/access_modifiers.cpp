#include<bits/stdc++.h>
using namespace std;

class A{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};

class B: private A{
    // private:
    // int b;
    // private:
    // int c;


    public:
    B(){
        // cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

class C: public B{
    public:
    C(){
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

int main(){
    A obj_a;
    // cout<<obj_a.a<<endl;
    // cout<<obj_a.b<<endl;
    cout<<obj_a.c<<endl;
    B obj_b;
    // cout<<obj_b.b<<endl;
    cout<<obj_b.c<<endl;
    C obj_c;
    // cout<<obj_c.b<<endl;
    cout<<obj_c.c<<endl;

    return 0;
}