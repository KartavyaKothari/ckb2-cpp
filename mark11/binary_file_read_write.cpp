#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    int age;
    char gender;

    public:

    Student(){}

    Student(string n, int a, char g){
        name = n;
        age = a;
        gender = g;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    vector<Student> arr;
    // arr.push_back(Student("Nakul",21,'M'));
    // arr.push_back(Student("Ishika",25,'F'));
    // arr.push_back(Student("Yashwant",19,'M'));

    ifstream fs("akashdeep.strange");

    // for(Student s: arr){
    //     // fs<<s;
    //     fs.write((char*)&s,sizeof(Student));
    //     // cout<<endl;
    // }

    vector<Student> arr2(3);

    for(int i = 0 ; i < 3 ; i++){
        fs.read((char*)&arr2[i],sizeof(Student));
        arr2[i].display();
        cout<<endl;
    }

    fs.close();

    return 0;
}