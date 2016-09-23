#pragma once
template <typename T>
bool SeqList<T>::Update(int i,const T &x)
{
	if (i<0 || i > n - 1)
	{
		cout << "Out of Bounds" << endl;
		return false;
	}
	elem[i] = x;
	return true;
}
