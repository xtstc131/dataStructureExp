#pragma once
template <typename T>
bool SeqList<T>::Insert(int i, const T& x)
{
	if (i < -1 || i > n - 1)
	{
		std::cout << "Out of Bounds !" << endl;
		return false;
	}
	for (auto j = n - 1; j > i; j--)
	{
		elem[j + 1] = elem[j];
	}
	elem[i + 1] = x;
	n++;
	return true;
}
