#pragma once
#include "Node.h"
#include <iostream>
using namespace std;
template<typename T>
class List
{
public:
	List()
	{
		head = new Node<T>;
		tailer = new Node<T>;
		head->succ = tailer; head->pred = nullptr;
		tailer->pred = head; tailer->succ = nullptr;
		n = 0;
	}
	~List();
	bool isEmpty()const { return n == 0; }
	int Length()const { return n; }
	
	bool Find(int i, T &x)const;
	int Search(T x)const;
	bool Insert(NodePosi(T),T x);
	void Remove(NodePosi(T) p, T & c, T & e);
	void Append(istream & in);
	bool Delete(int i);
	bool Update(int i, T c , T e);
	int Clear();
	void Output(ostream &out)const;
	void PolyAdd(List<T> & r);
	void PolyMul( const List<T> &r );
	
	List<T> & operator =(const List<T>& a)
	{
		Clear();
		NodePosi(T) p = a.head->succ;
		NodePosi(T) q = head;
		while (p != a.tailer)
		{
			q = q->insertAsSucc(p->coef, p->exp);
			p = p->succ;
		}
		return *this;
	}
	friend  ostream &operator <<(ostream  &out, const List<T> & val)
	{
		val.Output(out);
		return out;
	}
	friend	istream & operator >> (istream & in, List<T> & x)
	{
		x.Append(in);
		return in;
	}
	friend List<T> & operator + (List<T> & a, List<T> & b)
	{
		a.PolyAdd(b);
		return a;

	}
	friend List<T> & operator * (List<T> & a , List<T> & b)
	{
		 a.PolyMul(b);
		return a;
	}
private:
	NodePosi(T) head;//头节点
	NodePosi(T) tailer;//尾节点
	int n;
	
};
#include"List_implement.h"