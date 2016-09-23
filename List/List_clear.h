#pragma once
template <typename T>
int List<T>::Clear()
{
	int oldSize = n;
	T c, e;
	while (n>0)
	{
		this.Remove(head->succ,c,e);
	}
	return oldSize;
}
