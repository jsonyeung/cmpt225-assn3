/*
 * filename: BSTADT.h
 * 
 * Class Description: A data collection ADT class to satisfy Assn 3's requiremetns.
 * Class Invariant: 
 *
 * Creation date: July 7, 2016
 * Author: Jason Yeung, Bob Tian
 */
#include "Node.h"
#include "Word.h"

class BinarySearchTree : public BSTADT
{
private :
  
Node* rootPtr;
  
protected :
  
//------------------------------------------------------------
// Protected Utility Methods Section:
// Recursive helper methods for the public methods.
//------------------------------------------------------------
  
// Recursively finds where the given node should be placed and
// inserts it in a leaf at that point.
Node* insertInorder(Node* subTreePtr, Node* newNode);

// Removes the given target value from the tree while maintaining a
// binary search tree.
Node* removeValue(Node* subTreePtr, const Word target, bool& success);

// Removes a given node from a tree while maintaining a
// binary search tree.
Node* removeNode(Node* nodePtr);

// Removes the leftmost node in the left subtree of the node
// pointed to by nodePtr.
// Sets inorderSuccessor to the value in this node.
// Returns a pointer to the revised subtree.
Node* removeLeftmostNode( Node* subTreePtr, Word& inorderSuccessor);
	
// Returns a pointer to the node containing the given value,
// or nullptr if not found.
Node* findNode(Node* treePtr, const Word& target) const ;
  
public :
  
//------------------------------------------------------------
// Constructor and Destructor Section.
//------------------------------------------------------------
BinarySearchTree();
BinarySearchTree( const Word& rootItem);
BinarySearchTree( const BinarySearchTree& tree);
virtual ~BinarySearchTree();
//------------------------------------------------------------
// Public Methods Section.
//------------------------------------------------------------
bool isEmpty() const ;
int getHeight() const ;
int getNumberOfNodes() const ;
Word getRootData() const throw (PrecondViolatedExcep);
void setRootData( const Word& newData) const
throw (PrecondViolatedExcep);
bool add( const Word& newEntry);
bool remove( const Word& anEntry);
void clear();
Word getEntry( const Word& anEntry) const
throw (NotFoundException);
bool contains( const Word& anEntry) const ;
//------------------------------------------------------------
// Public Traversals Section.
//------------------------------------------------------------
void preorderTraverse(void visit(Word&)) const ;
void inorderTraverse(void visit(Word&)) const ;
void postorderTraverse(void visit(Word&)) const ;
//------------------------------------------------------------
// Overloaded Operator Section.
//------------------------------------------------------------
BinarySearchTree&
operator=(const BinarySearchTree& rightHandSide);
};