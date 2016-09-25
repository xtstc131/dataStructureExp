#pragma once
#define NodePosi(T) Node<T>* 
template<typename T>
struct Node
{
	T coef;//ϵ��
	T exp;//����
	
	NodePosi(T) succ;//��̽ڵ�ָ��
	NodePosi(T) pred;//ǰ���ڵ�ָ��
	//���캯��
	Node() {}
	explicit Node(T c ,T e, NodePosi(T) p = nullptr, NodePosi(T) s = nullptr) :coef(c),exp(e), succ(s), pred(p) {}
	//�ڵ����
	NodePosi(T) insertAsPred(T const &c, T const & e);//�Ե�ǰ�ڵ�ǰ������
	NodePosi(T) insertAsSucc(T const &c, T const & e);//�Ե�ǰ����̲���
};
#include"Node_implement.h"