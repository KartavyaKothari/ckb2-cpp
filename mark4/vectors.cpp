#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){   
    //int arr[];
    vector<int> arr;
    cout<<arr.size()<<endl;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(50);
    arr.push_back(60);
    arr.push_front(8);

    // for(int i = 0 ; i < arr.size() ; i++){
    //     cout<<arr[i]<<" ";
    // }
    
    for(int ele: arr){
        cout<<ele<<" ";
    }

    // int arr[] = {1,2,3,4,5};
    // vector<int> arr2 = { 10, 20, 30 };
    // cout<<arr2.size()<<endl;

    // // int arr[10];
    // // vector<int> arr(10);
    // vector<int> arr3(10,-1);
    // cout<<arr3.size()<<endl;

    return 0;
}