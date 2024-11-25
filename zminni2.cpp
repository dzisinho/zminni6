

#include <iostream>

using namespace std;

int main() {
    int sec;
    cout << "Enter the number of seconds since the start of the day: ";
    cin >> sec;

    int hr = sec / 3600;
    int min = (sec % 3600) / 60;
    int remainingSec = sec % 60;

    int secLeft = 86400 - sec; 
    int hrLeft = secLeft / 3600;
    int minLeft = (secLeft % 3600) / 60;
    int secLeftFinal = secLeft % 60;

    cout << "Current time: " << hr << " hr " << min << " min " << remainingSec << " sec\n";
    cout << "midnight: " << hrLeft << " hr " << minLeft << " min " << secLeftFinal << " sec\n";

    return 0;
}
