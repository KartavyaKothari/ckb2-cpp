#include<bits/stdc++.h>
using namespace std;

class GoodStudent{
    public: 
    string name;
    int age;
    int marks;

    // GoodStudent(string name, int age, int marks){
    //     this->name = name;
    //     this->age = age;
    //     this->marks = marks;
    // }

    GoodStudent(string n, int a, int m):
        name(n),
        age(a),
        marks(m)
    {}

    void introduce(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
    GoodStudent *g = new GoodStudent("Kishan",11,100);
    g->introduce();

    return 0;
}