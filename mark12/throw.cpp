#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    cin>>a>>b;

    try{
        if(b==0){
            // throw "Div by zero EXP";
            throw 404;
        }
        cout<<a/b<<endl;
    }catch(const char* e){
        cout<<e<<endl;
        cout<<"inf"<<endl;
    }catch(int e){
        cout<<"Integer dtype exp caught: "<<e<<endl;
    }
    return 0;
}