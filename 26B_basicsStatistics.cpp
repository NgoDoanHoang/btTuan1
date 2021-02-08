#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double a[n];

    for ( int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    double mean=0;
    double maxx=a[0];
    double minn=a[0];
    for ( int i=0; i<n; i++)
    {
        mean=mean+a[i];
        if ( a[i] > maxx ) maxx=a[i];
        if ( a[i] < minn ) minn=a[i];
    }
    cout << mean/n << endl ;
    cout << maxx << endl << minn;

    return 0;
}
