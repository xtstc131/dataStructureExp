#pragma once
template<typename T>
ostream & List<T>::operator<<(ostream & out, const Node<T>& val)
{
	if (val.coef == 0)return out;
	out << val.coef;
	switch (val.exp)
	{
	case 0:break;
	case 1:out << "X"; break;
	default:out << "X^" << val.exp; break;
	}
	
	
	return out;// TODO: �ڴ˴����� return ���
}