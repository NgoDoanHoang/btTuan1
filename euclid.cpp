#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b,c ,d ;
	cin >> a >> b >> c >> d;
	double z;
	z = ( b - a )*( b - a ) + (d - c)*( d - c );
	cout << sqrt(z);
	return 0;
}
