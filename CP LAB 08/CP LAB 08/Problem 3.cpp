#include<iostream>
using namespace std;

int SUM(int a, int b)
{
	return a + b;
}

float SUM(float a, float b)
{
	return a + b;
}

int main()
{
	int a, b;
	cout << "\n\nEnter the first integer value:  ";
	cin >> a;
	cout << "\n\nEnter the second integer value:  ";
	cin >> b;
	cout << "\n\nSum of  " << a << " & " << b << " is  =  " << SUM(a, b);

	cout << "\n\n********************************************************";

	float c, d;
	cout << "\n\nEnter the first float value:  ";
	cin >> c;
	cout << "\n\nEnter the second float value:  ";
	cin >> d;
	cout << "\n\nSum of  " << c << " & " << d << " is  =  " << SUM(c, d);


	cout << endl << endl;
	system("pause");
	return 0;
}

