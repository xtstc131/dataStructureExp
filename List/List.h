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
		head = nullptr; tailer = nullptr; 
		n = 0;
	}
	~List();
	bool isEmpty()const { return n == 0; }
	int Length()const { return n; }
	
	bool Find(int i, T &x)const;
	int Search(T x)const;
	bool Insert(NodePosi(T),T x);
	
	void Append(istream & in) ;
	bool Delete(int i);
	void Remove(NodePosi(T) p,T & c,T & e);

	bool Update(int i, T c , T e);
	int Clear();

	ostream &operator <<(ostream  &out, const Node<T> & val);
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
	void Output(ostream &out)const;
	void PolyAdd(List<T> & r);
private:
	NodePosi(T) head;//头节点
	NodePosi(T) tailer;//尾节点
	int n;
	
};
#include"List_implement.h"