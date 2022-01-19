#include<bits/stdc++.h>
using namespace std;

// if(condition){
//     true_statement
// }else{
//     false_statement
// }

// condition? true_stament : false_statement;

int max_self(int a , int b ){
    return a>b?a:b;
}

int max_self(int a , int b, int c){
    return max_self(a,max_self(b,c));
}

int max_self(int a , int b, int c, int d){
    return max_self(a,max_self(b,c,d));
}

int max_self(int a , int b, int c, int d, int e){
    return max_self(a,max_self(b,c,d,e));
}


int main(){
    cout<<"Max of 2 numbers is "<<max_self(-10,-20)<<endl;
    cout<<"Max of 3 numbers is "<<max_self(100,20,-23)<<endl;
    cout<<"Max of 4 numbers is "<<max_self(10,20,-1,-23)<<endl;
    cout<<"Max of 5 numbers is "<<max_self(-100,20,-23,45,34)<<endl;


    return 0;
}