#include<bits/stdc++.h>
using namespace std;

class Data{
    public:
    int ele;
    Data* next;
    Data(int ele){
        this->ele = ele;
        next = nullptr;
    }
};

class LinkedList{
    Data* start;
    Data* tail;
    int s;
    public:
    LinkedList(){
        start = tail = nullptr;
        s = 0;
    }

    void push(int ele){
        Data* d = new Data(ele);
        
        if(s == 0){
            start = d;
            tail = d;
            s++;
            return;
        }

        tail->next = d;
        tail = tail->next;
        // tail = d;
        s++;
    }

    int size(){
        return s;
    }

    void display(){
        Data* temp = start;

        while(temp != nullptr){
            cout<<temp->ele<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    LinkedList ll;
    ll.push(12);
    ll.push(10);
    ll.push(2);

    cout<<ll.size()<<endl;

    ll.display();
}