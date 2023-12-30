#include<iostream>
using namespace std;
void SWAP(int& a, int& b);
int main()
{
	int num1, num2;
	cout << "\n\nEnter First Number: ";
	cin >> num1;
	cout << "\n\nEnter Second Number: ";
	cin >> num2;
	cout << "\n\nBEFORE SWAP\n";
	cout << "\nNumber 1: " << num1;
	cout << "\n\nNumber 2: " << num2;
	SWAP(num1, num2);
	cout << endl << endl;
	system("pause");
	return 0;
}
void SWAP(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "\n\nAFTER SWAP";
	cout << "\n\nNumber 1: " << a;
	cout << "\n\nNumber 2: " << b;
}
