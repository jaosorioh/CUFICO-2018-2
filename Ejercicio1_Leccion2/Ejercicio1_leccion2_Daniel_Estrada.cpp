#include<iostream>

using namespace std;

int main()
{
	double b = 1.001;
	
	while (b<10000)
	{
		b*=1.001;
		
		cout << b << endl;
	}
	
	cout << "real	0m0.028s, user	0m0.012s, sys 0m0.016s" << endl;

	return 0;
}


