#include<bits/stdc++.h>
using namespace std;

class Nakul{
    public:
    string what(){
        return "I am Nakul, I am an exception";
    }
};

int main(){
    int a;
    cin>>a;

    string str = "Exp";

    try{
        switch (a){
            case 1:
                throw 404;
            case 2:
                throw Nakul();
            case 3: 
                throw "Yogesh";
            case 4: 
                throw 'm';
            case 5: 
                throw str;
        }
    }catch(string e){
        cout<<e;
    }catch(char e){
        cout<<e;
    }catch(const char * e){
        cout<<e;
    }catch(int e){
        cout<<e;
    }catch(...){
        cout<<"Catches everything"<<endl;
    }

    return 0;
}