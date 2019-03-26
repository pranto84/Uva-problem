#include<bits/stdc++.h>
using namespace std;
bool isLeapYear(int year){
    if(year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}
int main()
{
    int T, csno=0;
    cin >> T;
    while(T--){
        int date, month, year, year2;
        cin >> date >> month >> year >>year2;
        int birthdate = 0;
        if(date == 29 && month == 2){
            ++year;
            while(year <= year2){
                if(isLeapYear(year))
                    ++birthdate;
                ++year;
            }
        }
        else{
            birthdate = year2-year;
        }
        cout << "Case " << ++csno << ": " << birthdate << endl;
    }
}
