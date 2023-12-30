#include<iostream>
using namespace std;

int area(int a);                                                              //For Area of Square
float area(float a, float b);                                                 //For Area of Rectangle
float area(float a);                                                          //For Area of Circle

int main()
{
	int choice;
	cout << "\n\nPress 1 for area of square.\n\nPress 2 for area of Rectangle.\n\nPress 3 for area of Circle";
	cout << "\n\nEnter your choice...";
	cin >> choice;
	if (choice == 1)
	{
		int length;
		int areasquare;
		cout << "\n\nEnter the Length : ";
		cin >> length;
		areasquare = area(length);
		cout << "\n\nArea of the square is : " << areasquare;
	}
	else if (choice == 2)
	{
		float length, breadth;
		float arearectangle;
		cout << "\n\nEnter the length: ";
		cin >> length;
		cout << "\n\nEnter the Breadth: ";
		cin >> breadth;
		arearectangle = area(length, breadth);
		cout << "\n\nArea of the Rectangle: " << arearectangle;

	}
	else if (choice == 3)
	{
		float radius;
		float areacircle;
		cout << "\n\nEnter the Radius: ";
		cin >> radius;
		areacircle = area(radius);
		cout << "\n\nArea of the Circle is: " << areacircle;
	}
	else
	{
		cout << "\n\nInvalid Input";
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

int area(int a)
{
	int area = 0;
	area = a * a;
	return area;
}
float area(float a, float b)
{
	return a * b;
}
float area(float a)
{
	float area;
	const float pi = 3.148;
	area = pi * (a * a);
	return area;
}

