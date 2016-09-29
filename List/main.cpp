#include"List.h"
#include <stdio.h>
int main()
{
	List<int> a;
	List<int> b;

	cout << "a" << endl;
	cin >> a;
	cout << "b" << endl;
	cin >> b;
	List<int> temp;
	temp = a;
	cout << "Add:" << endl;
		cout << temp + b;
	cout << "Mul: " << endl;
		cout << a*b;
		getchar();
		getchar();

}