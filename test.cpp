#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include <math.h>

using namespace std;
int main()
{
	int x, i, k = 4;
	double y;
	cout << "Input x\n";
	cin >> x;	
	y = 0;
	for (int i = 1; i < k; i++)
	{
		y = i + sin(i*x);
		y = pow(x, 3) + y;
		cout << y << endl;
	}
}
