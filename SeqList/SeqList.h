#pragma once
#include "LinearList.h"
template<typename T>
class SeqList :public LinearList<T>
{
public:
	explicit SeqList(int mSize);
	virtual ~SeqList() { delete[] elem; }
	//�п�
	bool isEmpty() const override{ return n == 0; }
	//��������ĳ���
	int Length()const override { return n; }
	//����ĳλ�õ�Ԫ�� �� ��ʵ������[]���������ʵ��
	bool Find(int i, T & x)const override;
	int Search(const T &x)const override;
	//����
	bool Insert(int i, const T & x) override;
	//ɾ��
	bool Delete(int i) override;
	//��������Ԫ��
	bool Update(int i, const T &x) override;
	//�������
	void Output(ostream &out)const override;
	//���������������
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