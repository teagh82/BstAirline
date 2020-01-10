#include "binaryTree.h"

void
BinaryTree::levelorder() {
	printf("\nlevelorder: ");
	if (!isEmpty()) {
		CircularQueue q;
		q.enqueue(root);
		while (!q.isEmpty()) {
			BinaryNode* n = q.dequeue();
			if (n != NULL) {
				printf(" [%d] ", n->getData());
				q.enqueue(n->getLeft());
				q.enqueue(n->getRight());
			}
		}
	} printf("\n");
}

int
BinaryTree::getCount(BinaryNode *node) {
	if (node == NULL) return 0;
	return 1 + getCount(node->getLeft()) + getCount(node->getRight());
}

int
BinaryTree::getLeafCount(BinaryNode *node) {
	if (node == NULL) return 0;
	if (node->isLeaf()) return 1;
	else return getLeafCount(node->getLeft()) + getLeafCount(node->getRight());
}

int
BinaryTree::getHeight(BinaryNode *node) {
	if (node == NULL) return 0;
	int	hLeft = getHeight(node->getLeft());
	int	hRight = getHeight(node->getRight());
	return (hLeft > hRight) ? hLeft + 1 : hRight + 1;
}

int
BinaryTree::calcSize(BinaryNode *node) {
	if (node == NULL) return 0;
	return node->getData() + calcSize(node->getLeft()) + calcSize(node->getRight());
}

int
BinaryTree::evaluate(BinaryNode *node) {  // 수식 계산 함수
	if (node == NULL) return 0;
	if (node->isLeaf()) return node->getData();
	else {
		int op1 = evaluate(node->getLeft());
		int op2 = evaluate(node->getRight());
		switch (node->getData()) {
		case '+': return op1 + op2;
		case '-': return op1 - op2;
		case '*': return op1 * op2;
		case '/': return op1 / op2;
		}
		return 0;
	}
}

void
BinaryTree::inorder(BinaryNode *node) {	// 트리의 순회
	if (node != NULL) {
		if (node->getLeft() != NULL) inorder(node->getLeft());
		printf(" [%d] ", node->getData());
		if (node->getRight() != NULL) inorder(node->getRight());
	}
}

void
BinaryTree::preorder(BinaryNode *node) {
	if (node != NULL) {
		printf(" [%d] ", node->getData());
		if (node->getLeft() != NULL) preorder(node->getLeft());
		if (node->getRight() != NULL) preorder(node->getRight());
	}
}

void
BinaryTree::postorder(BinaryNode *node) {
	if (node != NULL) {
		if (node->getLeft() != NULL) postorder(node->getLeft());
		if (node->getRight() != NULL) postorder(node->getRight());
		printf(" [%d] ", node->getData());
	}
}
