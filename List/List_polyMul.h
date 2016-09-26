#pragma once
template <typename T>
void List<T>::PolyMul(const List<T>& r)
{
	List<T>  mulResult = List<T>();
	NodePosi(T) p = r.head->succ;
	NodePosi(T) q = head->succ;
	mulResult.head->insertAsSucc(0, 0);	
	while ( p->succ!=nullptr)
	{
		List<T>  temp = List<T>();
		NodePosi(T) tHead = temp.head;
		while (q != tailer)
		{
			int tCoef = p->coef * q->coef;
			int tExp = p->exp + q->exp;
			tHead = tHead->insertAsSucc(tCoef, tExp);
		//	cout  <<tCoef<<" "<<tExp<<endl;
			q = q->succ;
			cout <<"temp:"<<temp;
		}
		q = head->succ;
		mulResult.PolyAdd(temp);
		p = p->succ;
	}
	Clear();
	//cout <<"this: "<< *this;
	head->insertAsSucc(0, 0);
	PolyAdd(mulResult);
	
}
