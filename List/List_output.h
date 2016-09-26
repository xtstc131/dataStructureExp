#pragma once
template <typename T>
void List<T>::Output(ostream& out) const
{
	int first = 1;
	NodePosi(T) p = head->succ;
	cout << "The polynominal is:\n" << endl;
	for (; p != tailer  ; p = p->succ)
	{
		if (!first && (p->coef > 0))out << "+";
		first = 0;
		out << *p;
	}
	cout << "\n" << endl;
}
