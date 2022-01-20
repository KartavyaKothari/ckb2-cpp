#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int c = 20;
    // int *b = &a;

    int* b = &a;
    // int *b;
    // b = &a;
    

    cout<<"a: "<<a<<endl;
    cout<<"&a: "<<&a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"&b: "<<&b<<endl;
    cout<<"*b: "<<*b<<endl;

    return 0;
}