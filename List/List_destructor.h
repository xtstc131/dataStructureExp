#pragma once
template <typename T>
List<T>::~List()
{
	Clear();
	delete head; delete tailer;
}
