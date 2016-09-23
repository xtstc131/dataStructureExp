#pragma once
template <typename T>
void List<T>::Remove(NodePosi(T) p,T & c ,T&e)
{
	c = p->coef;
	e = p->exp;
	p->pred->succ = p->succ;
	p->succ->pred = p->pred;
	delete p; n--;
}
