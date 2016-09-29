#pragma once
template <typename T>
void List<T>::Append(istream& in) 
{
	int c, e;
	NodePosi(T) p = head;
	while (true)
	{
		cout << "Input a term(coef,exp)" << endl;
		cin >> c >> e;
		if (e <0)
		{
			cout << *this;
			break;
		}
		p=p->insertAsSucc(c, e);
		n++;
	}
}
