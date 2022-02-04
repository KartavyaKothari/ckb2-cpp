#include<bits/stdc++.h>
using namespace std;

class Macdonalds{
    public:
    virtual void shake_machine() = 0;
    virtual void coke_dispensor() = 0;
    virtual void limited_menu() = 0;
};

class Ayush_macd: public Macdonalds{};

class Lakshman_macd: public Ayush_macd{
    public:
    Lakshman_macd(){
        cout<<"Welcome to macdonalds"<<endl<<endl;
    }
    void shake_machine(){
        cout<<"Shaking milk"<<endl;
    }
    void coke_dispensor(){
        cout<<"Dispensing coke"<<endl;
    }
    void limited_menu(){
        cout<<"Limiting menu"<<endl;
    }
};

int main(){
    // Ayush_macd d;
    Lakshman_macd l;
    l.coke_dispensor();
    l.limited_menu();
    l.shake_machine();

    return 0;
}