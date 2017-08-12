#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

struct Time {
    int second = 0;
    int minute, hour;


};



int main()
{
    Time t;

    cout << "Enter hour:" << endl;
    cin >> t.hour;
    cout << "Enter minute:" << endl;
    cin >> t.minute;


    while(true) {
        cout << setw(2) << setfill('0') << t.hour << ":" << setw(2) << setfill('0') << t.minute << ":" << setw(2) << setfill('0') << t.second << endl;
        t.second++;
        Sleep(1000);
        system("Cls");
        if(t.second == 60) {
                t.second = 0;
                t.minute++;
        }
        if(t.minute == 60) {
                t.minute = 0;
                t.hour++;
        }
        if(t.hour == 24) {
                t.hour = 0;
        }
    }

    return 0;
}
