// https://www.youtube.com/watch?v=FUIle4Ghasw&index=37&list=PLk6CEY9XxSIDy8qVHZV-Nf-r9f2BkRZ6p
#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

int main()
{	
	cout << add(1, 4) << endl;
	cout << add(1.3, 23.1) << endl;

	return 0;
}