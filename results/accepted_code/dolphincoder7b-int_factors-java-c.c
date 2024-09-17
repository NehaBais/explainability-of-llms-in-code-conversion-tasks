#include <assert.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MIN(a, b) ((a) <= (b) ? (a) : (b))
#define MAX(a, b) ((a) >= (b) ? (a) : (b))

typedef struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
} TreeNode;

TreeNode *newNode(int x) {
  TreeNode *temp = malloc(sizeof(TreeNode));
  temp->val = x;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

void postOrder(TreeNode *root) {
  if (root == NULL)
    return;
  postOrder(root->left);
  postOrder(root->right);
  printf("%d ", root->val);
}

void preOrder(TreeNode *root) {
  if (root == NULL)
    return;
  printf("%d ", root->val);
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(TreeNode *root) {
  if (root == NULL)
    return;
  inOrder(root->left);
  printf("%d ", root->val);
  inOrder(root->right);
}

TreeSet *factors(long n, int len, TreeSet *factors) {
  // factors.add(n);
  // factors.add(1L);
  // for(int test = n - 1; test >= Math.sqrt(n); test--)
  //     if (n % test == 0){
  //         factors.add(test);
  //         factors.add(n / test);
  //     }
  return factors;
}

int main() {
  TreeSet *factors = malloc(sizeof(TreeSet));
  long n = 1536;
  printf("%ld has the following factors: \n", n);

  int len = 0;
  TreeSet *result = factors(n, len, factors);
  for (int i = 0; i < result->size; i++) {
    printf("%d ", result->elements[i]);
  }
  return 0;
}