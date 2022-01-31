#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    string species;
    void speak(){
        cout<<"Animal sound, oooo ooo"<<endl;
    }

    void introduce(){
        cout<<"I am a "<<species<<endl;
    }
};

class Dog: public Animal{};

int main(){
    Dog d;
    d.speak();
    d.species = "Doggy";
    d.introduce();


    return 0;
}