#include<bits/stdc++.h>
using namespace std;

int main(){
    // fstream fs("ayush.marvel",ios::in);
    ifstream fs("ayush.marvel");

    string name;
    int age;
    char gender;

    fs>>name>>age>>gender;

    cout<<name<<endl<<age<<endl<<gender<<endl;

    return 0;
}