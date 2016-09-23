#include "SeqList.h"
const int SIZE = 20;
int main()
{
	SeqList<int >  a(SIZE);
	SeqList<int >  b(SIZE);
	for (auto i = 0; i < 5; i++)
		a.Insert(i - 1, i);
	for (auto i = 5; i < 10; i++)
		b.Insert(i - 6, i);
	b.Insert(-1, 0);
	b.Insert(3, 2);
	b.Insert(b.Length() - 1, 4);
    
	Union(a, b);
	a.Output(cout);
	
	a.Reverse();
	a.Output(cout);

	a.Insert(-1,8);
	a.Output(cout);
	
	a.Remove(8);
	a.Output(cout);
	return 0;
}