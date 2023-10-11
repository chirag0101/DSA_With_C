//abcde1234a
//20011985      AVJPS9495H06011969
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct bT{
    int data;
    struct bT *left;
    struct bT *right;
}b;

b* insert(b* root,int val){
    if(root==NULL){
        b *newNode=(b*)malloc(sizeof(b));
        newNode->data=val;
        newNode->left=NULL;
        newNode->right=NULL;
        root=newNode;
        return root;
    }

    if(val<root->data){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }

    return root;
}

void inOrder(b* root){
    if(root==NULL){
        return;
    }

    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}

bool search(b* root,int ele){
    if(root==NULL){
        return false;
    }

    if(root->data==ele){
        return true;
    }

    if(root->data>ele){
        return search(root->left,ele);
    }else{
        return search(root->right,ele);
    }
}

void main(){
    b* root=NULL;
    int size;
    printf("Enter the number of digits: ");
    scanf("%d",&size);

    printf("Enter Values:");
    int val;
    for(int i=0;i<size;i++){
        scanf("%d",&val);
        root=insert(root,val);
    }

    int ele;
    printf("Enter Element to search:");
    scanf("%d",&ele);
    bool find=search(root,ele);

    if(find==true){
        printf("Found!");
    }else{
        printf("Not found!");
    }

    inOrder(root);
}