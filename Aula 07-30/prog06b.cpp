#include <iostream>

using namespace std;

template<typename T>
void troca(T &v1, T &v2){
	T aux = v1;
	v1 = v2;
	v2 = aux;
}

int main()
{
	int a=10, b=5;
	troca(a, b);
	cout << a << ' ' << b << endl;

	float x=1.5, y=3.3;
	troca(x, y);
	cout << x << ' ' << y << endl;

	char c1='@', c2='*';
	troca(c1, c2);
    cout << c1 << ' ' << c2 << endl;
}
