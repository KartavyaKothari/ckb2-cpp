#include<bits/stdc++.h>
using namespace std;

int main(){
    // fstream fs("ishika.scarlet",ios::out);
    ofstream fs("ishika.scarlet");

    vector<string> stud_names = {"yogesh","ayush","wanda"};
    vector<int> stud_ages = {31,22,19};
    vector<char> gender = {'M','M','F'};

    for(int i = 0 ; i < stud_names.size() ; i++){
        fs<<"Name: "<<stud_names[i]<<endl;
        fs<<"Gender: "<<gender[i]<<endl;
        fs<<"Age: "<<stud_ages[i]<<endl;
        fs<<endl;
    }

    return 0;
}