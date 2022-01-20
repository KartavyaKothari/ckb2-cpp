#include<bits/stdc++.h>
using namespace std;

bool is_eligible(int age){
    return age>=18?true:false;
}

int main(){
    string name;
    cout<<"Enter name: "<<endl;
    cin>>name;  
    cout<<"Enter age: "<<endl;
    int age;
    cin>>age;

    if(is_eligible(age)){
        cout<<name<<" is eligible to vote"<<endl;
    }else{
        cout<<name<<" is not eligible to vote"<<endl;
    }

    return 0;
}