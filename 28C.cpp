#include <iostream>

using namespace std;

int main()
{
    int h;
    for ( h=0; h<=24; h++)
    {
        if (h==0)
        {
            cout << "12 midnight" << endl;
        }
        if ( h>=1 && h<=11)
        {
            cout << h <<"am\n";
        }
        if (h==12)
        {
            cout << "12 noon" << endl;
        }
        if (h>=13 && h<=23)
        {
            cout << h%12 << "pm\n";
        }
    }
    return 0;
}
