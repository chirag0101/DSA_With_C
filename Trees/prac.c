#include<stdio.h>
#include<stdlib.h>

struct TreeNode{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* constructBt(struct TreeNode* root,int level){
    level++;
    struct TreeNode *newNode=malloc(sizeof(struct TreeNode));

    printf("Enter Data:");
    scanf("%d",&(newNode->data));

    char ch;
    getchar();
    printf("Add left subtree for level %d :(Y/N)?",level);
    scanf("%c",&ch);
    if(ch=='N'||ch=='n'){
        root->left=NULL;
    }else{
        root->left=constructBt(newNode,level);
    }

    getchar();
    printf("Add right subtree for level %d :(Y/N)?",level);
    scanf("%c",&ch);
    if(ch=='N'||ch=='n'){
        root->right=NULL;
    }else{
        root->right=constructBt(newNode,level);
    }
    return newNode;
}

void preOrder(struct TreeNode *root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct TreeNode *root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d",root->data);
}

void inOrder(struct TreeNode *root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}

void printBtree(struct TreeNode *root){
    char cho;
    do{
        int ch;
        printf("1.Pre 2.Post 3.In: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: preOrder(root);
            break;
        case 2: postOrder(root);
            break;
        case 3: inOrder(root);
            break;  
        }
        getchar();
        printf("\nContinue?:(y/n):");
        scanf("%c",&cho);
    }while(cho=='Y'||cho=='y');
}

void main() {
    struct TreeNode *root=NULL;

    root=malloc(sizeof(struct TreeNode));

    printf("Enter root data:");
    scanf("%d",&(root->data));

    char ch;
    getchar();
    printf("Add left subtree :(Y/N)?");
    scanf("%c",&ch);

    if(ch=='N'||ch=='n'){
        root->left=NULL;
    }else{
        root->left=constructBt(root,0);
    }

    getchar();
    printf("Add right subtree :(Y/N)?");
    scanf("%c",&ch);

    if(ch=='N'||ch=='n'){
        root->right=NULL;
    }else{
        root->right=constructBt(root,0);
    }

    printBtree(root);
}