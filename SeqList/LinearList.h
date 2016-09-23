#pragma once
#include <iostream>
using namespace std;
template<typename T>
class LinearList
{
protected:
	~LinearList()
	{
	}

private:
	virtual bool isEmpty()const = 0;
	virtual int Length() const = 0;
	virtual bool Find(int i, T & e)const = 0;
	virtual int Search(const T &e)const = 0; 
	virtual bool Insert(int i, const T & e) = 0;
	virtual bool Delete(int i) = 0 ;
	virtual bool Update(int i, const T& e) = 0;
	virtual void Output(ostream & out) const = 0;

};

