#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    arr.reserve(10);

    for(int i = 0 ; i < 60 ; i++){
        cout<<arr.size()<<" "<<arr.capacity()<<endl;
        arr.push_back(i);
    }

    return 0;
}