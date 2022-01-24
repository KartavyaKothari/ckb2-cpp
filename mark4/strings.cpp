#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Hello, my name is";
    string name;

    cout<<"Please enter your name: ";
    // cin>>name;
    getline(cin,name);

    str = str+" "+name;

    // cout<<str<<endl;

    // string t = "2";
    // cout<<t+"2"<<endl;

    for(int i = 0 ; i < str.size() ; i++){
        cout<<str[i]<<" ";
    }

    return 0;
}