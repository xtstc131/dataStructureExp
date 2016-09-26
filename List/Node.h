#pragma once
#include <iostream>
#define NodePosi(T) Node<T>* 
using std::ostream;
template<typename T>
struct Node
{
	T coef;//ϵ��
	T exp;//����
	
	NodePosi(T) succ;//��̽ڵ�ָ��
	NodePosi(T) pred;//ǰ���ڵ�ָ��
	//���캯��
	Node() {}
	explicit Node(T c ,T e, NodePosi(T) p = nullptr, NodePosi(T) s = nullptr) :coef(c),exp(e),  pred(p),succ(s) {}
	//�ڵ����
	NodePosi(T) insertAsPred(T const &c, T const & e);//�Ե�ǰ�ڵ�ǰ������
	NodePosi(T) insertAsSucc(T const &c, T const & e);//�Ե�ǰ����̲���
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