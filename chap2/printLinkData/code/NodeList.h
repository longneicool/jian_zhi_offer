#ifndef H3296D1EE_ADA3_43C1_B40B_0EDC7E15FBDA
#define H3296D1EE_ADA3_43C1_B40B_0EDC7E15FBDA

template<typename T>
struct Node
{
	T val;
	Node* next;
};

template<typename T>
struct NodeList
{
	typedef Node<T> NodeType;
	NodeList();
	void add(T val);
	void del(T val);
	unsigned size() const
	{
		return _size;
	}

	void print();
private:
private:
	NodeType *head;
	NodeType *tail;
	unsigned _size;
};

template<typename T>
NodeList<T>::NodeList() : head(NULL), tail(NULL), _size(0)
{

}

template<typename T>
void NodeList<T>::add(T val)
{
	NodeType *pNew = new NodeType;
	pNew->val = val;
	pNew->next = NULL;

	if(head == NULL)
	{
		head = pNew;
	}

	if(tail != NULL)
	{
		tail->next = pNew;
	}
	tail = pNew;

	_size++;
}

template<typename T>
void NodeList<T>::del(T value)
{
	if(head == NULL)
		return;

	if(head->val == value)
	{
		NodeType *pTmp = head;
		head = head->next;
		delete pTmp;

		_size--;
	}

	NodeType *pCur = head->next;
	NodeType *pPre = head;
	while(pCur != NULL)
	{
		if(pCur->val == value)
		{
			pPre->next = pCur->next;
			delete pCur;

			pCur = pPre->next;
			_size--;
			continue;
		}

		pPre = pCur;
		pCur = pCur->next;
	}
}

template<typename T>
void NodeList<T>::print()
{
	std::cout << "size: " << _size << std::endl;
	NodeType *node = head;
	while(node != NULL)
	{
		std::cout << node->val << " -> ";
		node = node->next;
	}

	std::cout << std::endl;
}

#endif
