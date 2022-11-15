/*
 Assignment 3: Create a Binary Search Tree | well-written, efficient, and versatile

 Professor Cook:
 Patrick Shin
 Student ID: 302290287
 
 Read a file and Sort in Binary Search Tree
 */

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <istream>
#include "BinarySearchTree.h"
#include "Entry.h"
#include "NodeType.h"
#include "Node.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // Reads the first line of text as a key
    // istringstream ss(str);
    // ss >> key;
    
    // Deletes the first line of the text
    // getline(file, ch);
    
    // prints the first integer as the key
    
    // prints the second string as the data
    
    // prints the tree.
    
    // Test 1.
    Node *tree;
    Node *root;
    char str[100];
    int i = 0;
    int key;
    FILE* fp;
    fp = fopen("/Users/mushu/Desktop/CS130/Assignment3_PS/Assignment3_PS/years.txt", "r");
    if ((fp = fopen("/Users/mushu/Desktop/CS130/Assignment3_PS/Assignment3_PS/years.txt","r")) == NULL)
    {
        printf("Could not open textFile.txt\n");
        exit(1);
    }
    //string str2;
    //string ch;
    while(fgets(str, 100, fp) != NULL)
    {
        /*
        getline(file, ch);

        istringstream ss(str);
        ss >> key;
        */
        
        root = tree->add(root, str);
        for(char & c : str)
        {
            if (c == ',')
                c = ':';
        }
        ++i;
        tree->print(root,key);
        //printf("%3d: %s +---", i, str);
     
    }
    
    // Test 2
    Node *tree2;
    Node *root2;
    char str2[100];
    int x = 0;
    //int key;
    FILE* fp2;
    //ifstream file("/Users/mushu/Desktop/CS130/Assignment3_PS/Assignment3_PS/years.txt");
    fp2 = fopen("/Users/mushu/Desktop/CS130/Assignment3_PS/Assignment3_PS/halloween_calories_2.txt", "r");
    if ((fp2 = fopen("/Users/mushu/Desktop/CS130/Assignment3_PS/Assignment3_PS/halloween_calories_2.txt","r")) == NULL)
    {
        printf("Could not open textFile.txt\n");
        exit(1);
    }
    //string str2;
    //string ch;
    while(fgets(str2, 100, fp2) != NULL)
    {
        
        root = tree2->add(root, str2);
        for(char & c : str)
        {
            if (c == ',')
                c = ':';
        }
        ++x;
        tree2->print(root,key);
        //printf("%3d: %s +---", i, str);
     
    }
    
    // Reads the first line of text as a key
    // istringstream ss(str);
    // ss >> key;
    
    // Deletes the first line of the text
    // getline(file, ch);
    
    // prints the first integer as the key
    
    // prints the second string as the data
    
    // prints the tree.
    
    // Test 3
    Node *tree3;
    Node *root3;
    char str3[100];
    int t = 0;
    int key3;
    FILE* fp3;
    fp3 = fopen("/Users/mushu/Desktop/CS130/Assignment3_PS/Assignment3_PS/halloween_calories.txt", "r");
    if ((fp3 = fopen("/Users/mushu/Desktop/CS130/Assignment3_PS/Assignment3_PS/halloween_calories.txt","r")) == NULL)
    {
        printf("Could not open textFile.txt\n");
        exit(1);
    }
    //string str2;
    //string ch;
    while(fgets(str, 100, fp3) != NULL)
    {
        /*
        getline(file, ch);

        istringstream ss(str);
        ss >> key;
        */
        
        root = tree3->add(root, str3);
        for(char & c : str)
        {
            if (c == ',')
                c = ':';
        }
        ++t;
        tree3->print(root,key);
        //printf("%3d: %s +---", i, str);
     
    }
    
    // Test 4
    Node *tree4;
    Node *root4;
    char str4[100];
    int z = 0;
    //int key;
    FILE* fp4;
    //ifstream file("/Users/mushu/Desktop/CS130/Assignment3_PS/Assignment3_PS/years.txt");
    fp4 = fopen("/Users/mushu/Desktop/CS130/Assignment3_PS/Assignment3_PS/pokemon.txt", "r");
    if ((fp4 = fopen("/Users/mushu/Desktop/CS130/Assignment3_PS/Assignment3_PS/pokemon.txt","r")) == NULL)
    {
        printf("Could not open textFile.txt\n");
        exit(1);
    }
    //string str2;
    //string ch;
    while(fgets(str4, 100, fp4) != NULL)
    {
        
        root = tree4->add(root, str4);
        for(char & c : str)
        {
            if (c == ',')
                c = ':';
        }
        ++z;
        tree4->print(root,key);
        //printf("%3d: %s +---", i, str);
     
    }
        
    return 0;
}
