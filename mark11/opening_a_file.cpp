#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream fs;
    fs.open("ayush.marvel",ios::out);

    if(!fs){
        cout<<"File opening failed"<<endl;
    }else{
        cout<<"File successfully opened"<<endl;
    }

    fs.close();

    return 0;
}