#pragma once
template <typename T>
int List<T>::Clear()
{
	int oldSize = n;
	T c, e;
	while (head->succ!=tailer)
	{
		Remove(head->succ,c,e);
	}
	return oldSize;
}
