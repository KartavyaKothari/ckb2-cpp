#include<bits/stdc++.h>
using namespace std;

int sum(int a = 0, int b = 0, int c = 100, int d = 1000, int e = 10000){
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
    return a+b+c+d+e;
}

// int sum2(int a, int b, int c){
//     return a+b+c;
// }

int main(){
    cout<<"Sum of 2 numbers = "<<sum(10,20)<<endl;
    cout<<"Sum of 3 numbers = "<<sum(10,20,30)<<endl;
    cout<<"Sum of 4 numbers = "<<sum(10,20,30,40)<<endl;
    cout<<"Sum of 5 numbers = "<<sum(10,20,30,40,50)<<endl;

    return 0;
}