#pragma once
template <typename T>
void List<T>::PolyAdd(List<T>& r)
{
	Node<T> * p, *q1 = head, *q;
	p = r->head->succ;
	q = q1->succ;
	while(p->exp>=0)
	{
		while((p->exp) < (q->exp ))
		{
			q1 = q;
			q = q->succ;
		}
		if (p->exp == q->exp)
		{
			q->coef = q->coed + p->coef;
			if (q->coef == 0)
			{
				q1->succ = q->succ;
				delete(q);
				q = q1->succ;
			}

		}
		else
			q1 = q1->insertAsSucc(p->coef, p->exp);
		p = p->succ;
	}
}
