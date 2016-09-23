#pragma once
template <typename T>
bool SeqList<T>::Delete(int i)
{
	if (!n)
	{
		cout << "UnderFlow" << endl;
		return false;
	}
	
	if (i<0 || i > n - 1)
	{
		cout << "Out of Bounds" << endl;
		return false;
	}
	for(auto j = i+1; j<n;j++)
	{
		elem[j - 1] = elem[j];
	}
	n--;
	return true;
}
