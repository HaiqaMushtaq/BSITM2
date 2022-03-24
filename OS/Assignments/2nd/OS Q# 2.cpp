#include<iostream>
using namespace std;

struct btree_t {
int data;
struct btree_t * right;
struct btree_t * left;
};
typedef struct btree_t node;

void insert(node ** tree, int val)
{
    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return ;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
        return ;
    }
    else 
    return ;

}

void deltree(node * tree)
{
    if (tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

node* search(node ** tree, int val)
{
    if(!(*tree))
    {
        return NULL;
    }

    if(val < (*tree)->data)
    {
        search(&((*tree)->left), val);
        return *tree;
    }
    else if(val > (*tree)->data)
    {
        search(&((*tree)->right), val);
        return *tree;
    }
    else if(val == (*tree)->data)
    {
        return *tree;
    }
}

int main()
{
    node *root;
    node *tmp;
    root = NULL;
    insert(&root, 1);
    insert(&root, 2);
    insert(&root, 3);
    insert(&root, 4);
    insert(&root, 5);
    insert(&root, 6);
    insert(&root, 7);

    tmp = search(&root, 4);
    if (tmp)
    {
        cout<<"searched node ="<<tmp->data<<endl;
    }
    else
    {
  
        cout<<"data not found in tree"<<endl;
    }
    deltree(root);
}

