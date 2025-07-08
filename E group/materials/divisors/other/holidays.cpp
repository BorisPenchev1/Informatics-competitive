#include<bits/stdc++.h>

using namespace std;

int compareDate(int startDay, int startMonth, int startYear, int endDay, int endMonth, int endYear){
    if (startYear > endYear) return -1 ;
    else if (startYear < endYear) return 1 ;
    else if (startMonth > endMonth) return -1 ;
    else if (startMonth < endMonth) return 1 ;
    else if (startDay > endDay) return -1 ;
    else if (startDay < endDay) return 1 ;
    else return 0 ;
}

int daysInMonth(int month, int year){
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return 29;
        else
            return 28;
    }
}

int main(){

    int startDay, startMonth, startYear;
    cin >> startDay;
    cin.get();
    cin >> startMonth ;
    cin.get();
    cin >> startYear ;

    int endDay, endMonth, endYear;
    cin >> endDay;
    cin.get();
    cin >> endMonth;
    cin.get();
    cin >> endYear;

    int year = 1900 ;
    int month = startMonth ;
    int day = 1 ;
    int day_week = 1 ;
    int holidays = 0;
    while (compareDate(startDay, startMonth, startYear, endYear, endMonth, endDay) >= 0){
        if (day_week == 6 or day_week == 7) holidays++ ;

        day_week++ ;
        day++ ;

        if (day > daysInMonth(month, year)){
            day = 1 ;
            month++;
        }
        if (month > 12){
            month = 1 ;
            year++ ;
        }
        if (day_week == 8) day_week == 1 ;
    }

    cout << holidays << endl ;

    return 0;
}