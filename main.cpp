#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Nhap so " << endl;
    int a=rand()% (500-0+1)+0;
    int b;
    do
    {
        cin >> b;
    }
    while ( b!=a );

}
