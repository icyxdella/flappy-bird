#include <iostream>

using namespace std;

/*int factorial(int x) {
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
*/

int prim(int x) {
   
	int divizor;
	for (divizor = 2; divizor <= x / 2; divizor++) {
		if (x % divizor == 0) return 0;
	}

	return 1;
}
int main() {
	int x = 0;
	cout << "Scrieti un numar:  "; cin >> x;
	if (prim(x)) cout << "Numar prim";
	else cout << "Numarul nu este prim";
	
	system("PAUSE");
	return 0;
}