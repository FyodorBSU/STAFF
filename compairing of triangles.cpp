#include <iostream>

using namespace std;

int main()

{
	double s, h, k;

	cout << "Enter the sides of triangle" << endl;
	cout << "s = " << endl;
	cin >> s;
	cout << "h = " << endl;
	cin >> h;
	cout << "k = " << endl;
	cin >> k;

	if (s == k)
	{
		if (s == h) cout << "Triangle is equilateral" << endl;

		else cout << "Triangle is isosceles" << endl;
	}

	else {
		if (k == h) cout << "Triangle is isosceles ";

		else cout << "Triangle is versalite";

	}



}

