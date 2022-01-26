#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<vector<int>> s;
    s.push({1,2,3});
    s.push({3,4});
    s.push({5,1});

    while(!s.empty()){
        for(int ele: s.top()){
            cout<<ele<<" ";
        }
        s.pop();
        cout<<endl;
    }
}