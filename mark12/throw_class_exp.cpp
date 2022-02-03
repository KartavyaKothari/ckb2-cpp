#include<bits/stdc++.h>
using namespace std;

class Nakul{
    public:
    string what(){
        return "I am Nakul, I am an exception";
    }
};

int main(){
    try{
        throw Nakul();
    }catch(Nakul n){
        cout<<n.what()<<endl;
    }

    return 0;
}