#include<bits/stdc++.h>
using namespace std;

class ComplexNumber{
    public:
    int r;
    int c;

    ComplexNumber(){
        r = 0;
        c = 0;
    }

    ComplexNumber(int r, int c):
        r(r),c(c)
    {}

    void display(){
        cout<<r<<(c>=0?"+":"-")<<abs(c)<<"i"<<endl;
    }

    void operator ++(){
        // cout<<""
        r = r*r;
        c = c*c;
    }

    ComplexNumber operator +(ComplexNumber &com){
        int real = r+com.r;
        int complex = c+com.c;

        return ComplexNumber(real,complex);
    }

    ComplexNumber operator -(ComplexNumber &com){
        int real = r-com.r;
        int complex = c-com.c;

        return ComplexNumber(real,complex);
    }
};

int main(){
    ComplexNumber c1(3,5);
    ComplexNumber c2(2,7);
    c1.display();
    c2.display();
    // ++c1;
    // c1.display();
    ComplexNumber c3 = c1+c2;
    ComplexNumber c4 = c1-c2;
    c3.display();
    c4.display();

    return 0;
}