#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[9] = {10,20,30,40,50,60,70,80,90};
    int arr2[9];
    int rot;
    cout<<"Rotate right by how many positions:";
    cin>>rot;

    // for(int j = 0 ; j < rot ; j++)
    for(int i = 0 ; i < 9 ; i++){
        arr2[(i+rot)%9] = arr[i];
    }

    for(int i = 0 ; i < 9 ; i++){
        cout<<arr2[i]<<" ";
    }
}