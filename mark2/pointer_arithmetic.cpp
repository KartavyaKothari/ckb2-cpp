#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    short c = 'a';

    int *b = &a;
    short *d = &c;

    cout<<"b: "<<b<<endl;
    cout<<"b+1: "<<b+1<<endl;
    cout<<"d: "<<d<<endl;
    cout<<"d+1: "<<d+1<<endl;

    return 0;
}