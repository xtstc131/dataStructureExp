#pragma once
template<typename T>
void SeqList<T>::swap(T &x ,T &y)
{
	T temp = x;
	x = y;
	y = temp;

}

template <typename T>
void SeqList<T>::Reverse()
{
	for (auto i = 0; i < n / 2; i++)
		swap(elem[i], elem[n - 1-i]);
}
