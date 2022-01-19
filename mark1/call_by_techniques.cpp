#include<bits/stdc++.h>
using namespace std;

void incre_by_value(int a){
    a++;
}

void incre_by_add(int *ptr){
    (*ptr)++;
}

void incre_by_ref(int &a){
    a++;
}

int main(){
    int a = 10;

    incre_by_value(a);
    cout<<a<<endl;

    incre_by_add(&a);
    cout<<a<<endl;

    incre_by_ref(a);
    cout<<a<<endl;

    return 0;
}