#include<bits/stdc++.h>
using namespace std;

class Height{
    public:
    int m;
    int cms;

    Height(double h){
        m = h/100;
        cms = (h-m*100);
    }

    void display(){
        cout<<m<<" meters and "<<cms<<" cms."<<endl;
    }
};

int main(){
    double height_cms = 182.88l;
    // m = 1
    // cms = 82
    // Height h(height_cms);
    Height h = height_cms;
    
    h.display();

    return 0;
}