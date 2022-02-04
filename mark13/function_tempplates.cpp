#include<bits/stdc++.h>
using namespace std;

template <class X_type> 
void display_vector(vector<X_type> arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr1{1,2,3,4};
    vector<string> arr2{"hello","bellow","cello"};

    display_vector<int>(arr1);
    display_vector<string>(arr2);

    return 0;
}