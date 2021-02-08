#include <iostream>

using namespace std;

int main()
{
    int a[3];
    for ( int i=0; i<3; i++)
    {
        cin >> a[i];
        if ( a[i] == 0) cout << "zero" << endl;
        if ( a[i] == 1) cout << "one" << endl;
        if ( a[i] == 2) cout << "two" << endl;
        if ( a[i] == 3) cout << "three" << endl;
        if ( a[i] == 4) cout << "four" << endl;
        if ( a[i] == 5) cout << "five" << endl;
        if ( a[i] == 6) cout << "six" << endl;
        if ( a[i] == 7) cout << "seven" << endl;
        if ( a[i] == 8) cout << "eight" << endl;
        if ( a[i] == 9) cout << "nine" << endl;
    }
    if ( a[0] == a[1] && a[1]==a[2] )
    {
        cout << "true";
    } else { cout << "false"; };
}
