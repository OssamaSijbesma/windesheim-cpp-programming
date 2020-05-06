#include "Stack.h"

template class Stack<int>;
template class Stack<double>;
template class Stack<char>;
template class Stack<string>;

template<typename T>
Stack<T>::Stack()
{
	max = DEFAULT_SIZE;
	size = 0;
	elements = new T[DEFAULT_SIZE];
}

template<typename T>
Stack<T>::~Stack()
{
	delete[] elements;
}

template<typename T>
T Stack<T>::Back()
{
	if (size == 0)
		return T();

	return elements[size - 1];
}

template<typename T>
T Stack<T>::PopBack()
{
	if (size == 0)
		return T();

	return elements[--size];
}

template<typename T>
void Stack<T>::PushBack(T element)
{
	if (size == max)
		Resize();

	elements[size++] = element;
}

template<typename T>
void Stack<T>::Empty()
{
	size = 0;
}

template<typename T>
void Stack<T>::Traverse()
{
	for (int i = 0; i < size; i++)
		cout << elements[i] << endl;
}

template<typename T>
int Stack<T>::Size()
{
	return size;
}

template<typename T>
void Stack<T>::Resize()
{
	cout << "resize array" << endl;

	max = size * 2;

	// Copy into the placeholder
	T* placeholder = new T[max];
	memcpy(placeholder, elements, size * sizeof(T));

	// Delete elements and set the placeholder back
	delete[] elements;
	elements = placeholder;
}
