#include<bits/stdc++.h>
using namespace std;

class Student{
    // string name;
    int age;
    int salary;

    public:

    Student(){}

    Student(int a, int sal){
        age = a;
        salary = sal;
    }

    void display(){
        // cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    vector<Student> arr;
    arr.push_back(Student(21,20000));
    arr.push_back(Student(25,50000));
    arr.push_back(Student(19,25000));

    fstream fs("akashdeep.strange",ios::out | ios::binary);

    for(Student s: arr){
        // fs<<s;
        fs.write((char*)&s,sizeof(Student));
        // cout<<endl;
    }

    fs.close();
    fs.open("akashdeep.strange",ios::in | ios::binary);

    vector<Student> arr2(3);

    for(int i = 0 ; i < 3 ; i++){
        fs.read((char*)&arr2[i],sizeof(Student));
        arr2[i].display();
        cout<<endl;
    }

    fs.close();

    return 0;
}