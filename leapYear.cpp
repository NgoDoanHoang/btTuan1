#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a%100==0)
        {
            if(a%400==0)
            {
                cout << "True";
            } else
            {
                cout << "False";
            }
        } else
            {
                if(a%4 == 0)
            {
                cout << "True";
		} else {
			cout << "False";
		}
	}
    return 0;
}
