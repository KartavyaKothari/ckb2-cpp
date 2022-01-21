#include<bits/stdc++.h>
using namespace std;

int power(int a, int n){
    if(n==0) return 1;

    int product = power(a,n/2);
    if(n%2==0) return product * product;
    else return a*product*product;
}

int main(){

    return 0;
}