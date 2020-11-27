#include <iostream>
using namespace std;

typedef int ElemType;

struct Node
{
	ElemType data;
	Node* next;
};

class LinkList
{
private:
	Node* Head;
public:
	LinkList();
	~LinkList();
	void CreateList2(int n);
	int GetElem(int i);
};

LinkList::LinkList()
{
	Head = new Node;
	Head->data = 0;
	Head->next = NULL;
}

LinkList::~LinkList()
{
	delete Head;
}

void LinkList::CreateList2(int n)
{
	Node* p, * s;
	p = Head;
	cout << "���������뼯�ϵ�" << n << "������Ԫ��ֵ��" << endl;
	for (int i = 1; i <= n; i++)
	{
		s = new Node;
		cin >> s->data;
		p->next = s;
		p = s;
	}
	cout << "�������" << endl;
}

int LinkList::GetElem(int i)
{
	Node* p;
	p = Head->next;
	int j = 1;
	while (p&&j<i)
	{	
		p = p->next;
		j++;
	}
	if (!p || j > i)
	{
		cout << "λ���쳣";
		return -1;
	}
	else
	return p->data;
}

void main()
{
	LinkList A,B;
	cout << "����һ�����㼯��A��B�����ĳ�ʽ���ֱ����뼯��A��B��ģ" << endl;
	int a,b,c,d;
	cin >> a >> b;
	A.CreateList2(a);
	B.CreateList2(b);
	cout << "����A��B�Ľ���Ϊ��";
	for (int i = 1; i <= a; i++)
	{
		c = A.GetElem(i);
		for (int j = 1; j <= b; j++)
		{
			d = B.GetElem(j);
			if (c ==d)
				cout << c<< ",";
		}
	}
	system("pause");
}
