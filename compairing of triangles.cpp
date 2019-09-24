#include <iostream>

using namespace std;

int main()

{
	double s, h, k;

	cout << "Enter the sides of triangle" << endl;
	cout << "s = ";
	cin >> s;
	cout << "h = " ;
	cin >> h;
	cout << "k = " ;
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
         system ("pause");
	return 0;


}

