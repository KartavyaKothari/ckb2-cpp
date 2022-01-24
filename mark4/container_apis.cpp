#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "Kartavya";

    //push_back
    // name+="K";
    name.push_back('K');
    // name.push_front(' ');
    cout<<name<<endl;
    name.pop_back();
    name.pop_back();
    cout<<name<<endl;

    return 0;
}