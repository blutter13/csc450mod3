#include <iostream>
#include <string>
using namespace std;
//Benjamin Lutter CSC450 Mod 3 Critical Thinking .
int main() {
	int a;
	int b;
	int c;
	cout << "Input an integer (1/3): ";
	cin >> a;
	cout << "Input an integer (2/3): ";
	cin >> b;
	cout << "Input an integer (3/3): ";
	cin >> c;
	int *aptr;
	int *bptr;
	int *cptr;
	aptr = new int(a);
	bptr = new int(b);
	cptr = new int(c);

	cout << "Integers: " << a << " " << b << " " << c;
	cout << "\nPointers: " << *aptr << " " << *bptr << " " << *cptr;

	delete aptr;
	delete bptr;
	delete cptr;

	return 0;
}
