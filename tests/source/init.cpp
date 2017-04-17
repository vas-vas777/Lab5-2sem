#include <Lab5-2sem.hpp>
#include <catch.hpp>
SCENARIO("add") 
{    
BinarySearchTree<int> r;    
BinarySearchTree<int>* root;    
int rv = r.add(10, root);        
REQUIRE( rv == 10);
}
SCENARIO("print") 
{    
BinarySearchTree<int> r;    
BinarySearchTree<int>* root;    
int rv = r.print(11, root);        
REQUIRE( rv == 11);
}
SCENARIO("search") 
{    
BinarySearchTree<int> r;    
BinarySearchTree<int>* root;    
int rv = r.search(12, root);        
REQUIRE( rv == 12);
}
SCENARIO("del") 
{    
BinarySearchTree<int> r;    
BinarySearchTree<int>* root;    
int rv = r.search(13, root);        
REQUIRE( rv == 13);
}
SCENARIO("delTree") 
{    
BinarySearchTree<int> r;    
BinarySearchTree<int>* root;    
int rv = r.search(14, root);        
REQUIRE( rv == 14);
}


