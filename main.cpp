#include <iostream>
#include <fstream>
#include<windows.h>
#include<stdio.h>
#include<iomanip>

using namespace std;


int main()
{

//read_text

    clog << "[IM]read_text:calender.in" << endl;
    ifstream  calender;
    calender.open(".\\calender\\calender.in");
    if (!calender){
            system("color 0C");
            cerr << "[Emergncy]merrer:cannot open the file";
            return 0;
    }
    clog << "[IM]open calender.in" << endl;
    int y;
    int m;
    int d;
    calender >> y >> m >> d;
    d--;
    clog << "[DB]y" << y <<"m" << m << "d" << d <<endl;
    bool yi = 0;
    int md = 30;
    calender.close();

//----------------------------------------------------------------------
//leep_common_year


    if (y%4==0&&y%100!=0){
        yi = 1;
        clog << "[IM]leap_year" << endl;
    }
    else{
        clog << "[IM]common_year" << endl;
}

//----------------------------------------------------------------------
//big_small_month

if (m == 1||m == 3||m == 5||m == 7||m == 8||m == 10||m == 12){
        md = 31;
        clog << "[IM]big_month" << endl;
    }
    if (m==2){
        if (yi == 1){
            md = 29;
            clog << "[IM]big_two_mouth" << endl;
        }
        else{
        md = 28;
        clog << "[IM]small_two_mouth" <<endl;
    }
    }
    if(m == 4||m == 6||m == 9||m == 11){
        md = 30;
        clog << "[IM]smell_month" << endl;
}
    clog << "mouth_day:" << md << endl;

//----------------------------------------------------------------------
//out_calender


    fstream calenderout(".\\calender\\calender.out");
   // calenderout.open(".\\calender\\calender.out");
    clog << "[IM]print_start" << endl;
    int i;
    i = 7-d;
    int nuber = 1;
    int n = 0;
    for(int abc = 7-i;0 < abc;abc--){
        calenderout << "   ";
        n++;
    }

    for ( ; nuber <= md; nuber++){
        calenderout << setw(2) << nuber << " ";
        n++;

        if (n >= 7){
            calenderout << endl;
            n = 0;
        }
    }
    calenderout.close();
    return 0;
}

