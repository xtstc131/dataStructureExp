#pragma once
template <typename T>
bool SeqList<T>::Find(int i, T& x) const
{
	if (i<0 || i > n - 1)
	{
		cout << "Out of Bounds" << endl;
		return false;
	}
	x = elem[i];
	return true;
}
