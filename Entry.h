//
//  Entry.h
//  Assignment3_PS
//
//  Created by P S on 11/7/22.
//

#ifndef Entry_h
#define Entry_h

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <istream>
#include "BinarySearchTree.h"
#include "NodeType.h"
//#include "Node.h"

//#include <pair>
using namespace std;

template<class T>
class Entry
{
private:
    //NodeType<T> *key_head;
    //NodeType<T> *value_tail;
  
    
public:
    Entry();
    //~Entry();
    string About(); // Returns text about you - the author of this class
    void Addkey_head(T value); // Adds an object to the key_head of the list
    void Addvalue_tail(T value); // Adds an object to the value_tail of the list
    string removekey_head(); // Removed an object from the key_head of the list. If the list is empty, return empty
    string peekkey_head(); // Returns the value from the key_head of the list
    bool contains(T value);
    void print(); // print library
    bool isEmpty();
    
    // Helper Functions
    string key();
    int value();
    
    string GetName();
    // Helper Functions.
    //void peek();
    // Removal
    void remove();
    
    // Print and Sort Functions.
    //void RevPrint(NodeType<T> *key_head);
    //void radixSort(vector<T> &file);
    //bool searchRec(NodeType<T> *curr, T val);
    
    void countingSort(string arr[], int length, int key);
    
    void BubbleSort(Entry<T> *phoneBook, const int &length);
    
    void radixSort(string arr[], int val);

    size_t get_max(string arr[], int length);

    Entry<T> readFile(string &filename);
    void display(Entry<T> &v);
    
    int size();
    
    int key_t; 
    string main_key;
    string main_value;

};

template<class T>
class NodeType
{
public:
    //NodeType<T> (Entry<T> entry);
    NodeType<T> *left;
    NodeType<T> *right;
    void print(NodeType<T> *node, int indent);
    void add (Entry<T> node, T key);
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
void NodeType<T>::add(Entry<T> node, T key)
{
    //NodeType<T> *node;
    //node->left = NULL;
    //node->right = NULL;
    if (node == NULL)
    {
        return newNode(key);
    }
    else if (key < node->data)
        add(node->left, data);
    else if (key > node->data)
        add(node->right, data);
    else if (key == node->data)
        node->count++;
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


#endif /* Entry_h */
