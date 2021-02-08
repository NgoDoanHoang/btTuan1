#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    bool b = ( (x > y && y > z) || (x < y && y < z) );
    if ( b==1 ) cout << "true" << endl;
    if ( b==0 ) cout << "false" << endl;

}
