#include "SeqList.h"
const int SIZE = 20;
int main()
{
	SeqList<int>  a(SIZE);
	SeqList<int>  b(SIZE);
	for (auto i = 0; i < 5; i++)
		a.Insert(i - 1, i);
	for (auto i = 5; i < 10; i++)
		b.Insert(i - 6, i);
	b.Insert(-1, 0);
	b.Insert(3, 2);
	b.Insert(b.Length() - 1, 4);
	cout << "a:" << endl;
	a.Output(cout);
	cout << endl;
	
	cout << "b:" << endl;
	b.Output(cout);
	cout<<endl;
	
	Union(a, b);
	cout << "a:Union:" << endl;
	a.Output(cout);
	cout << endl;
	
	a.Reverse();
	cout << "a:Reverse:" << endl;
	a.Output(cout);
	cout << endl;
	
	a.Insert(-1,8);
	cout << "a:Insert 8:" << endl;
	a.Output(cout);
	cout << endl;
	
	cout << "a:Remove 8:" << endl;
	a.Remove(8);
	a.Output(cout);
	cout << endl;
	
	getchar();
	return 0;
}