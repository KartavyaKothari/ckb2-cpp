#include<bits/stdc++.h>
using namespace std;

void func(){
    throw "Hey hey";
}

void func2(){
    func();
}

int main(){
    try{
        func2();
    }catch(...){
        cout<<"EXP caught"<<endl;
    }

    return 0;
}