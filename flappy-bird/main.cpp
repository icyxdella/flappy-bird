#include <iostream>

using namespace std;

int factorial(int x) {
	int  rezultat = 1;
	for (int i = 1; i <= x; i++)
	{
		rezultat = rezultat * i;
	}
	return rezultat;
}
int main()
{

	int x = 0, q = 0, w = 0, e = 0, r = 0;

	cout << "Introduceti x";
	cin >> x >> q >> w >> e >> r ;
	
	cout << factorial(x) << " " << factorial(q) << " " << factorial(w) << " " << factorial(e) << " " << factorial(r);
	system("PAUSE");
	return 0;
}