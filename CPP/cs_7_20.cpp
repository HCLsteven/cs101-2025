#include <iostream>

using namespace std;

int main() {
    int a = 255;
    cout << a << endl;
    cout << uppercase << hex << a << endl;
    cout << showbase << hex << a << endl;
    cout << nouppercase << showbase << hex << a << endl;
    return 0;
}
