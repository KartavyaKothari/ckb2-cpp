#include<bits/stdc++.h>
using namespace std;

int main(){
    int b;
    cin>>b;
    
    try{
        int* arr = new int[b*b*b];
        cout<<"Exception didnt occur"<<endl;
    }catch(char e){
        cout<<"Exception occured: "<<endl;
        cout<<"But since we are awesome, we handled it"<<endl;
    }catch(bad_alloc e){
        cout<<"Exception occured: "<<endl;
        cout<<"But since we are awesome, we handled it"<<endl;
    }


    cout<<"Program sucessfully ended :)"<<endl;

    return 0;
}