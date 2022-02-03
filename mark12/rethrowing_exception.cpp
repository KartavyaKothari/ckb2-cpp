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
        try{
            throw Nakul();
        }catch(Nakul e){
            cout<<"Yea I caught it, but I need to rethrow it, since I cant handle it right now"<<endl;
            throw;
        }
    }catch(Nakul e){
        cout<<"Yea yea, I am here, *celebrates*, Nakul is happy "<<endl;
    }

    cout<<"Program ended nicely :)"<<endl;

    return 0;
}