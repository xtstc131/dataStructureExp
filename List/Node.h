#pragma once
#include <iostream>
#define NodePosi(T) Node<T>* 
using std::ostream;
template<typename T>
struct Node
{
	T coef;//系数
	T exp;//次数
	
	NodePosi(T) succ;//后继节点指针
	NodePosi(T) pred;//前驱节点指针
	//构造函数
	Node() {}
	explicit Node(T c ,T e, NodePosi(T) p = nullptr, NodePosi(T) s = nullptr) :coef(c),exp(e),  pred(p),succ(s) {}
	//节点插入
	NodePosi(T) insertAsPred(T const &c, T const & e);//以当前节点前驱插入
	NodePosi(T) insertAsSucc(T const &c, T const & e);//以当前结点后继插入
	friend ostream & operator<<(ostream & out, const Node<T>& val)
	{
		if (val.coef == 0)return out;
		out << val.coef;
		switch (val.exp)
		{
		case 0:break;
		case 1:out << "X"; break;
		default:out << "X^" << val.exp; break;
		}


		return out;
	}
};
#include"Node_implement.h"