#include <iostream>
#include <string>

using namespace std;

int main() {
    string first_name = "IU";
    string last_name = " Lee";
    string full_name = first_name.append(last_name);
    cout << full_name << endl;
    cout << "length " << full_name.length() << endl;
    cout << "size " << full_name.size() << endl;
    return 0;
}
