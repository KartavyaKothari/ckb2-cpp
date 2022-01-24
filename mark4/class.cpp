#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int age;
    string name;

    Student(string n, int a){
        name = n;
        age = a;
    }

    void introduce(){
        cout<<"My name is "<<name<<", I am "<<age<<" years old."<<endl;
    }
};

int main(){
    Student* s = new Student("Nakul",20);
    s->introduce();
    // Student s;
    // s.name = "Nakul";
    // s.age = 21;

    // s.introduce();

    return 0;
}