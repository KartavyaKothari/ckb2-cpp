#include<bits/stdc++.h>
using namespace std;

class Planet{
    public:
    string name;
    int year_time;

    Planet(){
        cout<<"Cons called"<<endl;
    }

    ~Planet(){
        cout<<"Des called"<<endl;
    }

    void introduce(){
        cout<<"Hi, I am "<<name<<endl;
    }
};

void science_committee(){
    cout<<"In committee"<<endl;
    Planet p;
    p.name = "Pluto";
    p.year_time = 200;
    p.introduce();
    cout<<"Meeting over"<<endl;
}

int main(){
    science_committee();
    cout<<"In main again"<<endl;

    return 0;
}