#include<bits/stdc++.h>
using namespace std;

double calc(double a, double b, char op){
    switch(op){
        case '*':
            return a*b;
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '/':
            return a/b;
    }

    cout<<"SYNTAX ERROR, output not valid"<<endl;
    return -1;
}

int main(){

    // int, float, double, short, char, long, long long, long double
    // bool, string

    double a,b;
    char op;

    cin>>a>>op>>b;

    double result = calc(a,b,op);

    cout<<a<<op<<b<<" = "<<result<<endl;
    return 0;
}