#include<bits/stdc++.h>
using namespace std;

int main(){
    list<string> solar_sys = {"Mercury","Venus","Earth","Mars","Jupitor","Saturn","Uranus","Neptune"};
    // list<string>::iterator falcon = solar_sys.begin();
    // list<string>::iterator milano = solar_sys.begin();

    // for(falcon = solar_sys.begin() ; falcon != solar_sys.end() ; falcon++){
    //     cout<<*falcon<<endl;
    // }

    // advance(falcon,-6);
    // cout<<"Falcon is at "<<*falcon<<endl;
    // cout<<"Falcon is "<<distance(milano,falcon)<<" planets away from milano"<<endl;

    auto falcon = solar_sys.rbegin();
    auto milano = solar_sys.rbegin();

    for(falcon = solar_sys.rbegin() ; falcon != solar_sys.rend() ; falcon++){
        cout<<*falcon<<endl;
    }

    return 0;
}