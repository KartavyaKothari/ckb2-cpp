#include<bits/stdc++.h>
using namespace std;

class A{};
class B: public A{};

int main(){
    // A obj_a;
    // B obj_b;
    // obj_a = obj_b;

    try{
        A a;
        B b;

        throw a;
    }
    catch(B e){
        cout<<"Class B caught"<<endl;
    }
    catch(A e){
        cout<<"Class A caught"<<endl;
    }
    catch(...){
        cout<<"General exp"<<endl;
    }

    return 0;
}