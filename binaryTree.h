#include "binaryNode.h"
#include "circularQ.h"

class BinaryTree
{
protected:
	BinaryNode*	root;
public:
	BinaryTree() : root(NULL) { }
	~BinaryTree() { }

	void 	setRoot(BinaryNode* node) { root = node; }
	BinaryNode* getRoot() { return root; }
	bool 	isEmpty() { return root == NULL; }

	int	getCount() { return isEmpty() ? 0 : getCount(root); }
	int	getLeafCount() { return isEmpty() ? 0 : getLeafCount(root); }
	int	getHeight() { return isEmpty() ? 0 : getHeight(root); }
	void inorder() { printf("\n   inorder: "); inorder(root); }
	void preorder() { printf("\n  preorder: "); preorder(root); }
	void postorder() { printf("\n postorder: "); postorder(root); }
	void levelorder();
	int getCount(BinaryNode *node);
	int getLeafCount(BinaryNode *node);
	int getHeight(BinaryNode *node);
	int	calcSize() { return calcSize(root); }
	int calcSize(BinaryNode *node);
	int evaluate() { return evaluate(root); }
	int evaluate(BinaryNode *node);
	
private:
	// 트리의 순회
	void inorder(BinaryNode *node);
	void preorder(BinaryNode *node);
	void postorder(BinaryNode *node);
	};