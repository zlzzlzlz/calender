#include <iostream>
#include <fstream>
#include<windows.h>
#include<stdio.h>

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
    clog << "[DB]y" << y <<"m" << m << "d" << d <<endl;
    bool yi = 0;
    int md = 30;

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

    freopen(".\\calender\\calender.out", "w", stdout);
    clog << "[IM]print_start" << endl;
    int i;
    i = 7-d;
    int nuber = 1;
    for(int abc = 7-i;0 < abc;abc--){
        cout << "     ";
    }
    for (int abc = 0;i > abc;abc++){
        ;
        cout << nuber;
        cout << "   ";
        nuber++;
    }
    cout << endl;
    for (int abc = 0;7 > abc;abc++){
        cout << nuber;
        cout << "   ";
        nuber++;
    }
    cout << endl;
    for (int abc = 0;7 > abc;abc++){
        cout << nuber;
        cout << " ";
        nuber++;
    }
    cout << endl;
    for (int abc = 0;7 > abc;abc++){
        cout << nuber;
        cout << " ";
        nuber++;
    }


    cout << endl;
    for (int abc = 0;md-nuber >= 0&&abc < 7 ;abc++){
        cout << nuber;
        cout << " ";
        nuber++;

}
    cout << endl;
    for (int abc = 0;md-nuber >= 0&&abc < 7 ;abc++){
        cout << nuber;
        cout << " ";
        nuber++;


}
    cout << endl;
    for (int abc = 0;md-nuber >= 0&&abc < 7 ;abc++){
        cout << nuber;
        cout << " ";
        nuber++;
    }
    return 0;
}
