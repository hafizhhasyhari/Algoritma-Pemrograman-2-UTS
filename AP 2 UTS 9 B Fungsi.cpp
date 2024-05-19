#include <iostream>
#include <string>
using namespace std;
void tambah(int a, int b)
{
	a += 10;
	b += 10;
}
void tambahRef(int &a, int &b)
{
	a += 10;
	b += 10;
}
int main() {
	int a,b;
	a = 10; b=5;
	tambah(a, b);
	
	cout <<"\nbyval \na="<<a<<", b="<<b;
	
	tambahRef(a,b);
	cout <<"nbyref \na=" <<a<<",b="<<b;
	return 0;
}
