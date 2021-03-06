#include <iostream>
#include <stdlib.h>
using namespace std;

template<typename type> 
class BinarySearchTree
{

public: 	
       BinarySearchTree *parent; 	
       BinarySearchTree *left;
       BinarySearchTree *right;
       type data;
       
int add(type data, BinarySearchTree *&root)
{
   if (!root)
   {
       root = new BinarySearchTree;
       root->data = data;
       root->parent = root;
       return root->data;
   }
       else
       if (root->data > data)
           add(data, root->left);
       else
       if (root->data < data)
       add(data, root->right);
       else 
              return root->data;	
}
int print(int tree1, BinarySearchTree *root)
{
    if (!root) return tree1;
    if(root->data==10) return tree1=12;
    return tree1;
}
int search(int tree2, BinarySearchTree *root)
{
    if (!root) return tree2;
    
    
    if (root->data >= 0)
    {
    root->data=1;
    }
    return root->data;
}
int del(int tree3, BinarySearchTree *root)
{
    if (!root) return tree3;
    
    cout<<"Enter number which you want to delete: "<<endl;
    
    if (root->data == tree3)
    {
    cout<<"You cannot delete root"<<endl;
    return 0;
    }
}
int delTree (int tree4, BinarySearchTree *root)
{
    if (root != NULL)
    {
    delete root;
    root=NULL;
    }
    
    return tree4;
}
};
