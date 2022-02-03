#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int a;
};

// Student* get_new(){
//     Student s;
//     s.a = 10;

//     return &s;
// }

Student* get_new(){
    Student *s = new Student();
    s->a = 10;

    return s;
}

int main(){
    Student* s = get_new();

    cout<<s->a<<endl;

    return 0;
}