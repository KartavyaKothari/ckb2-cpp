#include<bits/stdc++.h>
using namespace std;

string whats_my_grade(int marks){
    marks = marks / 10;

    switch(marks){
        case 9: return "AA";
        case 8: return "AB";
        case 7: return "AA";
        case 6: return "AB";
        case 5: return "AA";
        case 4: return "AB";
        default: return "FAIL";
    }
}

string whats_my_grade(int marks){
    if(marks >= 91) return "AA";
    if(marks >= 81) return "AB";
    if(marks >= 71) return "BB";
    if(marks >= 61) return "BC";
    if(marks >= 51) return "CD";
    if(marks >= 41) return "DD";

    return "Fail";
}

int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    cout<<"Your grade is "<<whats_my_grade(marks)<<endl;
    return 0;
}