//
//  BinarySearchTree.h
//  Assignment3_PS
//
//  Created by P S on 11/7/22.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <istream>
#include "Entry.h"
#include "NodeType.h"

using namespace std;

template<class T>
class BinarySearchTree
{
public:
    
    NodeType<T> *root;
    
    BinarySearchTree();
    string about();
    void print();
    void add(T entry);
    string find(int key);
    void RevPrint(NodeType<T> *key_head);
    void readFile(string &file1);
    void preorder(NodeType<T> *key);
    void makeEmpty();
    bool isEmpty() const;
    
    T key;
    
    // Helper functions
    bool findNode(NodeType<T> *root, int key);
    
    
};

template<class T>
BinarySearchTree<T>::BinarySearchTree()
{
    
}

template<class T>
string BinarySearchTree<T>::about()
{
    string name;
    cout << "Enter the author of this code: ";
    getline(cin, name);
    return name;
}

template <class T>
void BinarySearchTree<T>::makeEmpty()
    {
        if (isEmpty())
        {
            return;
        }
        else
        {
            root->left = NULL;
            root->right = NULL;
            root->data = NULL;
            delete root;
        }
    }

template <class T>
bool BinarySearchTree<T>::isEmpty() const
    {
        if (root->data == NULL) return true;
        else
            return false;
    }


template<class T>
void BinarySearchTree<T>::RevPrint(NodeType<T> *key_head)
{
    if (key_head != NULL)
    {
        RevPrint(key_head->link);
        
        cout << key_head->item << " ";
    }
}

/*
template<class T>
void BinarySearchTree<T>::print()
{
    if(key_head != NULL)
    {
        RevPrint(key_head);
    }
    else
    {
        cout << "Empty Linked List" << endl;
    }
}

 */
// Adds the key to the correct position in the BST. If the key already exists, do nothing.
// Creating a proper-set of numbers.
template<class T>
void BinarySearchTree<T>::add(T entry)
{
    NodeType<T> *node; 
    if(node == NULL)
        return;
    if (strcmp(key, node->key) < 0)
        node->left = insert(node-left, key);
    if(strcmp(key, node->key) < 0)
        node->right = insert(node-right, key);
    
}

// Finds a node with the key and returns the Entry's value.
// If not found return an empty string.

/*
template<class T>
void BinarySearchTree<T>::find(int key)
{

}
 */ 

template<class T>
bool BinarySearchTree<T>::findNode(NodeType<T> *root, int key)
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

/*
template<class T>
void BinarySearchTree<T>::readFile(string &file1)
{
    ifstream source;
    string str;
    source.open(file1);
    BinarySearchTree<T> *ko;
    int i = 0;
    
    while(fgets(str, 100, source) != NULL)
    {
        cout << "+---";
        //cout <<
        left.print(key + 1);
        right.print(key + 1);
    }
}
 */

#endif /* BinarySearchTree_h */
