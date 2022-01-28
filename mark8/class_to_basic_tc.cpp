#include<bits/stdc++.h>
using namespace std;

class Date{
    public:
    int day;
    int month;
    int year;

    Date(int d, int m, int y):
        day(d),
        month(m),
        year(y)
    {}

    int gets_days_from_start_of_year(){
        return day+(month-1)*30;
    }

    operator int(){
        return day+(month-1)*30;
    }

    void display(){
        cout<<(day/10==0?"0":"")<<day<<(month/10==0?"/0":"/")<<month<<"/"<<year<<endl;
    }
};

int main(){
    Date d(28,1,2022);
    d.display();

    int days_this_year = (int) d;
    cout<<days_this_year<<endl;

    return 0;
}

// Make program which converts numbers into words;
// 1023 - One thousand and Twenty three