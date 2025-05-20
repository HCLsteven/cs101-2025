#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Enter number:";
    cin >> x;
    while (x < 1 || x > 4){
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Invalid number ..." << endl
        << "try again:";
        cin >> x;
    }
    return 0;
}
