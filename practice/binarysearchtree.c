#include <stdio.h>
#include <stdlib.h>
typedef struct node node;

#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))

struct node {
    int val;
    int count;
    struct node *left;
    struct node *right;
};

void treeadd(node **root, int n);

node *addnode(node *root, int n);

void printtree(node *root, int indent);

node *newnode(int val);

int maxintree(node *root);

int minintree(node *root);

int leafcount(node *root);

int treeheight(node *root);

int main() {
    node *root = NULL;
    int n;
    scanf("%d", &n);
    for (int i = 0, a; i < n; i++) {
        scanf("%d", &a);
        root = addnode(root, a);
    }
    printtree(root, 0);

    printf("%d", maxintree(root));
    printf("\n%d", leafcount(root));
    printf("\n%d", treeheight(root));
}

void treeadd(node **root, int n) {
    if (*root == NULL) {
        *root = malloc(sizeof(node));
        (*root)->val = n;
        (*root)->left= NULL;
        (*root)->right= NULL;
        (*root)->count= 1;
        return;
    }
    node *t = *root;
    while (!(t->left == NULL && t->right == NULL)) {
        if (n < t->val) {
            if (t->left != NULL)
                t = t->left;
            else
                break;
        } else if (n > t->val) {
            if (t->right != NULL)
                t = t->right;
            else
                break;
        } else if( n== t->val) break;
    }
    node *new = malloc(sizeof(node));
    new->val = n;
    new->left = NULL;
    new->right = NULL;
    new->count = 1;
    if (n < t->val)
        t->left = new;
    else if (n > t->val)
        t->right = new;
    else 
        t->count++, free(new);

}

void printtree(node *root, int indent) {
    if (root == NULL) return;
    for (int i = 0; i < indent; i++)
        printf("\t");
    printf("%d, ct: %d\n", root->val, root->count);
    for (int i = 0; i < indent; i++)
        printf("\t");
    printf("left: \n"), printtree(root->left, indent+1);
    for (int i = 0; i < indent; i++)
        printf("\t");
    printf("right: \n"), printtree(root->right, indent+1);
    for (int i = 0; i < indent; i++)
        printf("\t");
    printf("done\n");
}

int maxintree(node *root) {
    if (root == NULL) return -1;
    int a, b;
    a = maxintree(root->left);
    b = maxintree(root->right);
    return MAX(MAX(a, b), root->val);
}

int minintree(node *root) {
    if (root == NULL) return -1;
    int a, b;
    a = minintree(root->left);
    b = minintree(root->right);
    return MAX(MAX(a, b), root->val);
}

int leafcount(node *root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    return leafcount(root->left) + leafcount(root->right);
}

node *newnode(int val) {
    node *new = malloc(sizeof(node));
    new->val = val;
    new->count = 1;
    new->left = new->right = NULL;
    return new;
}

int treeheight(node *root) {
    if (root == NULL) return 0;

    return 1+MAX(treeheight(root->left), treeheight(root->right));
}

node *addnode(node *root, int n) {
    if (root == NULL)
        return newnode(n);
    if (root->val ==n) {
        root->count++; return root;
    }
    if (n <= root->val)
        root->left = addnode(root->left, n);
    else 
        root->right = addnode(root->right, n);
    return root;
}
