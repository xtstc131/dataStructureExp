#pragma once
template <typename T>
void SeqList<T>::Output(ostream& out) const
{
	for (auto i = 0; i < n; i++)
		out << elem[i] << ' ';
	if (n == 0)
		out << elem;
	out << endl;
}
