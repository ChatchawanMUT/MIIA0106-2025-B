#include<iostream>
#include<cmath>

using namespace std;

double rectArea(double width, double height)
{
	double result = width * height; // calculate area of rectangle	
	return result; // return area of circle
}

int main()
{
	double radius; // declare radius variable
	double result; // declare result variable

	cout << "Enter the radius: "; // prompt user for radius
	cin >> radius; // read radius from user

	result = 3.14 * radius * radius; // calculate area of circle
	cout << "The area of the circle is: " << result << endl; // display result

	//width height
	double width, height; // declare width and height variables
	cout << "Enter width"; // prompt user for width and height
	cin >> width; // read width 
	cout << "Enter height"; // prompt user for height
	cin >> height; // read height

	result = rectArea(width, height); // calculate area of rectangle
	cout << "The area of the rectangle is: " << result << endl; // display result

	return 1;
}