#include<bits/stdc++.h>
using namespace std;

class Metric{
    public:
    int kms;
    int m;
    int cms;

    Metric(int k, int m, int c){
        this->kms = k;
        this->m = m;
        this->cms = c;
    }

    void display(){
        cout<<kms<<" kms, "<<m<<" mts and "<<cms<<" cms."<<endl;
    }
};

class Imperial{
    public:
    int miles;
    int feet;
    int inches;

    Imperial(){}

    Imperial(int m, int f, int i){
        this->miles = m;
        this->feet = f;
        this->inches = i;
    }

    Imperial(Metric &m){
        miles = m.kms/1.6;
        feet = m.m/0.3;
        inches = m.cms/2.54;
    }

    void operator =(Metric &m){
        miles = m.kms/1.6;
        feet = m.m/0.3;
        inches = m.cms/2.54;
    }

    operator Metric(){
        int kms = miles*1.6;
        int m = feet*0.3;
        int cms = inches*2.54;

        return Metric(kms,m,cms);
    }

    void display(){
        cout<<miles<<" miles, "<<feet<<" feet and "<<inches<<" inches."<<endl;
    }
};

int main(){
    Imperial i(5,2632,2);
    i.display();

    Metric m = (Metric) i;
    m.display();

    Imperial i2 = m;
    // i2 = m;
    // Imperial i2(m);
    i2.display();

    return 0;
}