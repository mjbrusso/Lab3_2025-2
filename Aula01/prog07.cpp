#include <iostream>

using namespace std;

void foo(){
	cout << "foo()\n";
}

void foo(int n){
	cout << "foo(" << n << ")\n";
}

void foo(char ch){
	cout << "foo(" << ch << ")\n";
}

int main()
{
	foo();
	foo(1234);
	foo('A');
}
