#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3] = {1,2,3};
    int arr2[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int arr3[3][2][3] = {
        {
            {1,2,3},
            {4,5,6}
        },
        {
            {7,8,9},
            {9,8,7}
        },
        {
            {6,5,4},
            {3,2,1}
        }
    };
    int arr4[3][2][3] = {
        {
            {1,2,3},
            {4,5,6}
        },
        {
            {7,8,9},
            {9,8,7}
        },
        {
            {6,5,4},
            {3,2,1}
        }
    };

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            for(int k = 0 ; k < 3 ; k++){
                cout<<arr3[i][j][k]+arr4[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}