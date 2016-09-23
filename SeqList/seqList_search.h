#pragma once
template <typename T>
int SeqList<T>::Search(const T &x) const
{
	for (auto j = 0; j< n; j++)
	{
		if (elem[j] == x) 
			return j; 
			
	}
	return -1;
}
