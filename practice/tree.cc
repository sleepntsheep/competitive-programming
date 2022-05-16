#include <iostream>

using namespace std;

struct treenode {
	int value;
	treenode *left;
	treenode *right;
};

treenode *create(int value) {
	treenode *result = new treenode;
	if (result != NULL) {
		result->left = NULL;
		result->right = NULL;
		result->value =value;
	}
	return result;
}

void printTree(treenode *root) {
	if (root == NULL) {
		puts("----<empty>----");
		return;
	}
	printf("%d", root->value);
	printTree(root->left);
	printTree(root->right);
}

int main() {
	treenode *n1 = create(10);
	treenode *n2 = create(11);
	treenode *n3 = create(12);
	treenode *n4 = create(13);
	treenode *n5 = create(14);

	n1->left = n2;
	n1->right = n3;
	n3->left = n4;
	n3->right = n5;

	delete n1;
	delete n2;
	delete n3;
	delete n4;
	delete n5;
}
