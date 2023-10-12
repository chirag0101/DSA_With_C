#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct bsTree{
    int data;
    struct bsTree *left;
    struct bsTree *right;
}b;

b* insert(b* root,int data){
    if(root==NULL){
        b* newNode=(b*)malloc(sizeof(b));
        newNode->data=data;
        newNode->left=NULL;
        newNode->right=NULL;
        root=newNode;
        return newNode;
    }
    if(root->data>data){
        root->left=insert(root->left,data);
    }else{
        root->right=insert(root->right,data);
    }
    return root;

}

bool searchInBst(b* root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data=data){
        return true;
    }
    if(root->data>data){
        return searchInBst(root->left,data);
    }
    if(root->data<data){
        return searchInBst(root->right,data);
    }
}

void printBST(b* root){
    if(root==NULL){
        return;
    }else{
        printBST(root->left);
        printf("%d ",root->data);
        printBST(root->right);
    }
}

void maxNode(b* root){

}

int main(){
    b* root=NULL;
     int size,data;
    printf("Enter No. of Nodes:");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        scanf("%d",&data);
        root=insert(root,data);
    }
    
    char ch;
    do{

        int choice;
        printf("Enter Choice: \n1.Insert Node\n2.Print Tree\n3.Search Element\n4.Max Node\n5.Min Node");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:{
                printf("Enter Data:");
                scanf("%d",&data);
                root=insert(root,data);
            }
            break;
        
        case 2: printBST(root);
            break;

        case 3:{
            int search;
            printf("Enter element to search:");
            scanf("%d",&search);
            bool found=searchInBst(root,search);
            if(!found){
                printf("Found!\n");
            }else{
                printf("Not Found!\n");
            }
        }
        break;

        case 4: maxNode(root);
            break;
        
        default: printf("Invalid IP!\n");
            break;
        }
        getchar();
        printf("Continue?");
        scanf("%c",&ch);

    }while(ch=='Y'||ch=='y');

    return 0;
}
