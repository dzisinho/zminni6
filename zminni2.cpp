
#include <iostream>
using namespace std;
int main() {
    int sec;
    cin >> sec;

    int hrLeft = (8 * 3600 - sec) / 3600;

    if (hrLeft < 0) {
        cout << "Workday is finish\n";
    }
    else {
        cout << hrLeft << " full hours left\n";
    }

    return 0;
}
