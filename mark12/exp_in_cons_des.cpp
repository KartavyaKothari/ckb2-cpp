#include<bits/stdc++.h>
using namespace std;

class Yogesh{
    public:

    Yogesh(){
        cout<<"Calling Cons"<<endl;
    }
    ~Yogesh(){
        cout<<"Calling Des"<<endl;
    }
};

int main(){
    try{
        Yogesh y;
        throw 0;
    }catch(int e){
        cout<<"Int exp"<<endl;
    }

    cout<<"Program ends"<<endl;

    return 0;
}