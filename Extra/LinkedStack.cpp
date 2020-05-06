#include "LinkedStack.h"

template class LinkedStack<int>;
template class LinkedStack<double>;
template class LinkedStack<char>;
template class LinkedStack<string>;


template<typename T>
LinkedStack<T>::LinkedStack()
{
	top = new Node<T>;
	size = 0;
}

template<typename T>
LinkedStack<T>::~LinkedStack()
{
	delete top;
}

template<typename T>
T LinkedStack<T>::Peek()
{
	if (size == 0)
		return T();
	return top->value;
}

template<typename T>
T LinkedStack<T>::Pop()
{
	if (size == 0)
		return T();

	T placeholder = top->value;
	Node<T>* temp = top;
	top = top->next;
	delete temp;
	size--;

	return placeholder;
}

template<typename T>
void LinkedStack<T>::Push(T element)
{
	Node<T>* temp = new Node<T>();
	temp->value = element;
	temp->next = top;
	top = temp;
	size++;
}

template<typename T>
void LinkedStack<T>::Empty()
{
	if (size != 0)
	{
		size = 0;
		Delete(top);
		top = new Node<T>;
	}
}

template<typename T>
void LinkedStack<T>::Traverse()
{
	Print(top);
}

template<typename T>
int LinkedStack<T>::Size()
{
	return size;
}

template<typename T>
void LinkedStack<T>::Print(Node<T>* node)
{
	if (node->next != nullptr)
		Print(node->next);

	cout << node->value << endl;

}

template<typename T>
void LinkedStack<T>::Delete(Node<T>* node)
{
	Node<T>* temp = node->next;
	delete node;

	if (temp != nullptr)
		Delete(temp);
}
