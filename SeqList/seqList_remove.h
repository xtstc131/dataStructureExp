#pragma once
template <typename T>
bool SeqList<T>::Remove(const T& x)
{
	bool hasFind = false;
	for (int i = 0; i < n; i++)
	{
		if (elem[i] == x)
		{
			Delete(Search(x));
			hasFind = true;
		}
	}
	return hasFind;
}
