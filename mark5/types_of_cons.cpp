#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    char gender;

    Student(){
        // cout<<"Default cons called"<<endl;
    }

    Student(string name, int age, char gender){
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    // Student(Student &s){
    //     this->name = s.name;
    //     this->age = s.age;
    //     this->gender = s.gender;
    // }

    void introduce(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<(gender=='M'?"Male":"Female")<<endl;
    }
};

int main(){
    Student *s_d = new Student();
    Student *s = new Student("Ayush",330,'M');

    // Student s3 = *s;
    // Student *s3 = new Student(*s);
    Student *s2 = new Student(*s);
    s2->introduce();

    return 0;
}