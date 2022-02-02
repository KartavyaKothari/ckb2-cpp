#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream fs("yogesh.loki");

    fs.seekg(10);

    string str;
    getline(fs,str);

    cout<<str;

    return 0;
}