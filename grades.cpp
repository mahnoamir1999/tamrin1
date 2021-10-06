#include <iostream>
using namespace std;
int main()
{
    string firstname, lastName;
    float x, y, z, ave;
    cout << "Enter your firstname & last name: ";
    cin >> firstname >> lastName;
    cout << "Enter your 3 grades: ";
    cin >> x >> y >> z;
    ave = (x + y + z) / 3;
    if (ave >= 17)
        cout << "Great" << endl;
    else if (ave < 17 && ave >= 12)
        cout << "Normal" << endl;
    else if (ave < 12)
        cout << "Fail" << endl;
}
