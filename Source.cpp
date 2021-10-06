#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the measurement:";
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b)
        cout << "True Inputs!" << endl;
    else
        cout << "False Inputs! " << endl;

    return 0;
}