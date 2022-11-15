//
//  NodeType.h
//  Assignment3_PS
//
//  Created by P S on 11/9/22.
//

/*
#ifndef NodeType_h
#define NodeType_h

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <istream>
#include "Entry.h"
#include "BinarySearchTree.h"

using namespace std;

template<class T>
class NodeType
{
public:
    //NodeType<T> (Entry<T> entry);
    NodeType<T> *left;
    NodeType<T> *right;
    void print(NodeType<T> *node, int indent);
    NodeType<T> add (NodeType<T>*node, char*key);
    string find(int key);
    void preorder(NodeType<T> *node);
    bool findNode(NodeType<T> *root, int key);

    NodeType<T> newNode(char *item);
    
    T data;
    string key;
};

template<class T>
void NodeType<T>::preorder(NodeType<T> *node)
{
    if (node == NULL)
    {
        return;
    }
    preorder(node);
    cout << node->left << " ";
    cout << node->right << " ";
}

// Prints will the structure of the tree. One node will be printed per line.
// Preorder tree tarversal.
// Adds the key to the correct position in the BST.
template<class T>
void NodeType<T>::print(NodeType<T> *node, int indent)
{
    cout << std::string(2*indent, ' ');
    if (node == NULL)
        cout << "NULL" << endl;
    else
    {
        cout << node->key << ":" << node->data << endl;
        indent += 1;
        print(node->right, indent);
        print(node->left, indent);
    }
}

template<class T>
NodeType<T> NodeType<T>::newNode(char *item)
{
    NodeType<T> *temp = new NodeType<T>;
    temp->key = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}


template<class T>
NodeType<T> NodeType<T>::add(Entry<T> node, T key)
{
    //NodeType<T> *node;
    //node->left = NULL;
    //node->right = NULL;
    if (node == NULL)
    {
        return newNode(key);
    }
    else if (data < )
    
    return node;
}

// inserts the node into the key.

// Finds a node with the key and returns its value.

// mycodeschool Search function;
template<class T>
bool NodeType<T>::findNode(NodeType<T> *root, int key)
{
    if (root == NULL)
        return "Empty String";
    else if (root->key == key)
    {
        return root->key;
    }
    else if(data <= root->data) return Search(root->left, data);
    else
        return Search(root->right, data);
}

#endif /* NodeType_h */

