#pragma once
#define NodePosi(T) Node<T>* 
template<typename T>
struct Node
{
	T coef;
	T exp;
	NodePosi(T) succ; NodePosi(T) pred;
	Node (){}
	explicit Node(T e ,NodePosi(T) p = nullptr , NodePosi(T) s = nullptr) :elem(e),succ(s),pred(p){}
	NodePosi(T) insertAsPred(T const &c , T const & e);
	NodePosi(T) insertAsSucc(T const &c, T const & e);
};