#pragma once
template<typename T>
 NodePosi(T) Node<T>::insertAsSucc(T const & c, T const & e)
{
	NodePosi(T) p = new Node(c, e, this, succ);
	succ = p; succ->pred = p;
	return p;
}