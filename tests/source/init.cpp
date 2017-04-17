#include <Lab5-2sem.hpp>
#include <catch.hpp>
SCENARIO("add") 
{    
BinarySearchTree<unsigned int> r;    
BinarySearchTree<unsigned int>* root;    
int rv = r.Add(10, root);        
REQUIRE( rv == 10);
}
SCENARIO("print") 
{    
BinarySearchTree<unsigned int> r;    
BinarySearchTree<unsigned int>* root;    
int rv = r.print(11, root);        
REQUIRE( rv == 11);
}
SCENARIO("search") 
{    
BinarySearchTree<unsigned int> r;    
BinarySearchTree<unsigned int>* root;    
int rv = r.Search(12, root);        
REQUIRE( rv == 12);
}
SCENARIO("del") 
{    
BinarySearchTree<unsigned int> r;    
BinarySearchTree<unsigned int>* root;    
int rv = r.Search(13, root);        
REQUIRE( rv == 13);
}
SCENARIO("delTree") 
{    
BinarySearchTree<unsigned int> r;    
BinarySearchTree<unsigned int>* root;    
int rv = r.Search(14, root);        
REQUIRE( rv == 14);
}


