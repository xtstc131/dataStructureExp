#pragma once
#include "LinearList.h"
template<typename T>
class SeqList :public LinearList<T>
{
public:
	explicit SeqList(int mSize);
	virtual ~SeqList() { delete[] elem; }
	//判空
	bool isEmpty() const override{ return n == 0; }
	//返回数组的长度
	int Length()const override { return n; }
	//搜索某位置的元素 ？ 其实可以用[]运算符重载实现
	bool Find(int i, T & x)const override;
	int Search(const T &x)const override;
	//插入
	bool Insert(int i, const T & x) override;
	//删除
	bool Delete(int i) override;
	//更新数组元素
	bool Update(int i, const T &x) override;
	//输出数组
	void Output(ostream &out)const override;
	//重载中括号运算符
	void Reverse();
	bool Remove(const T &x);
	void swap(T &x, T &y);
	T& operator[](int i) const{ return elem[i]; }
private:

	int maxLength;
	T * elem;
	int n;
};
template <typename T>
void Union(SeqList<T>&a, SeqList<T>&b)
{
	T x;
	for (int i = 0; i < b.Length(); i++)
	{
		x = b[i];
		if (a.Search(x) == -1)
		{
			a.Insert(a.Length() - 1, x);
		}
			
	}
}

#include "seqList_implement.h"