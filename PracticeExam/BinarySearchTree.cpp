#include "BinarySearchTree.h"

template class BinarySearchTree<int>;
template class BinarySearchTree<double>;
template class BinarySearchTree<char>;

template <typename T>
BinarySearchTree<T>::BinarySearchTree()
{
	root = nullptr;
}

template <typename T>
BinarySearchTree<T>::~BinarySearchTree(){
	if (root != nullptr)
        DeconstructTree(root);
}

template <typename T>
void BinarySearchTree<T>::DeconstructTree(Node<T>* node)
{
    if (node->left != nullptr)
        DeconstructTree(node->left);
    if (node->right != nullptr)
        DeconstructTree(node->right);
    delete node;
}

template <typename T>
void BinarySearchTree<T>::Insert(T x)
{
    if (root == nullptr) 
        root = new Node<T>(x);
    else
        Insert(root, x);
}

template <typename T>
void BinarySearchTree<T>::Insert(Node<T>* node, T x)
{
    if (x < node->info)
        if (node->left != nullptr)
            Insert(node->left, x);
        else
            node->left = new Node<T>(x);
    else
        if (node->right != nullptr)
            Insert(node->right, x);
        else
            node->right = new Node<T>(x);
}

template <typename T>
void BinarySearchTree<T>::Traverse()
{
    Traverse(root);
}

template <typename T>
void BinarySearchTree<T>::Traverse(Node<T>* node)
{
    if (node != nullptr)
    {
        Traverse(node->left);
        std::cout << node->info << std::endl;
        Traverse(node->right);
    }
}


template<typename T>
void BinarySearchTree<T>::Remove(T x)
{
    Node<T>* removeNode = Find(root, x);

    if (removeNode->left == nullptr && removeNode->right == nullptr)
        delete removeNode;
    else 
    {
        if (removeNode->right == nullptr)
            removeNode = removeNode->left;
        else 
            removeNode = FindMin(removeNode->right);
    }
}

template<typename T>
Node<T>* BinarySearchTree<T>::Find(Node<T>* node, T x)
{
    if (node == nullptr)
        return nullptr;
    else if (node->info == x)
        return node;
    else if (x < node->info)
        Find(node->left, x);
    else
        Find(node->right, x);
}

template<typename T>
Node<T>* BinarySearchTree<T>::FindMin(Node<T>* node)
{
    if (node == nullptr)
        return nullptr;
    if (node->left != nullptr)
        return FindMin(node->left);
    return node;
}