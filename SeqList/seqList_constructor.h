#pragma once
template <typename T>
SeqList<T>::SeqList(int mSize)
{
	maxLength = mSize;
	elem = new T[maxLength];//maxLength�ܲ�����0
	n = 0;
}
