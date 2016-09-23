#pragma once
template<typename T>
 NodePosi(T) Node<T>::insertAsPred(T const & c, T const & e)
{
	NodePosi(T) p = new Node(c, e, pred, this);
	pred->succ = p; pred = p;
	return p;
}