#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream fs;
    fs.open("yogesh.loki", ios::app | ios::in);

    // if()

    string str;
    // fs>>str;
    getline(fs,str);
    fs<<"I dont know, maybe you're"<<endl;

    cout<<str;

    return 0;
}