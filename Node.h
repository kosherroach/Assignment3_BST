//
//  Node.h
//  Assignment3_PS
//
//  Created by P S on 11/12/22.
//

#ifndef Node_h
#define Node_h

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

//
class Node
{
public:
    //Node(Entry<T> entry);
    Node *left;
    Node*right;
    void print(Node *node, int indent);
    Node* add (Node *node, char*key);
    string find(int key);
    void preorder(Node *node);
    bool findNode(Node *root, char* key);

    Node* newNode(char *item);
    
    int data;
    char*key;
};


void Node::preorder(Node *node)
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

void Node::print(Node*node, int indent)
{
    cout << std::string(2*indent, ' ');
    if (node != NULL)
    {
        cout << "+--- ";
        //cout << node->data << ":" << node->key << endl;
        cout << node->key << endl;
        indent += 1;
        print(node->right, indent);
        print(node->left, indent);
    }
}


Node* Node::newNode(char *item)
{
    Node*temp = new Node;
    temp->key = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}


Node* Node::add(Node *node, char* key)
{
    //Node*node;
    //node->left = NULL;
    //node->right = NULL;
    if (node == NULL)
    {
        return newNode(key);
    }
    if(strcmp(key, node->key) < 0)
        node->left = add(node->left, key);
    if(strcmp(key, node->key) > 0)
        node->right = add(node->right, key);
    
    return node;
}

// inserts the node into the key.

// Finds a node with the key and returns its value.

string Node::find(int key)
{
    //return string(key);
    return " ";
}

// mycodeschool Search function;

bool Node::findNode(Node *root, char* key)
{
    if (root == NULL)
        return false;
    else if (root->key == key)
    {
        return root->key;
    }
    else if(key <= root->key) return findNode(root->left, key);
    else
        return findNode(root->right, key);

    return true;
}


#endif /* Node_h */
