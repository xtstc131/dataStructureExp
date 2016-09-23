#pragma once
template <typename T>
SeqList<T>::SeqList(int mSize)
{
	maxLength = mSize;
	elem = new T[maxLength];//maxLength能不能是0
	n = 0;
}
