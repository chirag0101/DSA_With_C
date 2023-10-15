#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct Bstree{
    int data;
    struct Bstree* left;
    struct Bstree* right;
}b;

b* insert(b* root,int data){
    if(root==NULL){
        b* newNode=(b*)malloc(sizeof(b));
        newNode->data=data;
        newNode->left=NULL;
        newNode->right=NULL;
        root=newNode;
        return root;
    }

    if(data<root->data){
        root->left=insert(root->left,data);
    }else{
        root->right=insert(root->right,data);
    }
    return root;
}

void prinTree(b* root){
    if(root==NULL){
        return;
    }
    prinTree(root->left);
    printf("%d ",root->data);
    prinTree(root->right);
}

void maxNode(b* root){
    if(root==NULL){
        return;
    }
    if(root->right==NULL){
        printf("Max Node: %d ",root->data);
        return;
    }
    maxNode(root->right);
}

void minNode(b* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL){
        printf("Min Node: %d ",root->data);
        return;
    }
    minNode(root->left);
}

bool search(b* root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data==data){
        return true;
    }
    if(data<root->data){
        return search(root->left,data);
    }else{
        return search(root->right,data);
    }
}

b* delete(b* root,int data){

}

int main(){
    b* root=NULL;
    char ch;
    do{
        int choice;
        printf("Enter Choice:   1. Insert Node. 2.Print Tree. 3.Max Node. 4.Min Node. 5.Search Node. 6.Delete Node.:");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                int data;
                printf("Enter Data:");
                scanf("%d",&data);
                root=insert(root,data);
            }
            break;
            
            case 2:{
                prinTree(root);
            }            
            break;
            
            case 3:{
                maxNode(root);
            }
            break;

            case 4:{
                minNode(root);
            }
            break;
            
            case 5:{
                int data;
                printf("Enter Data to find:");
                scanf("%d",&data);
                bool found=search(root,data);
                if(found==true){
                    printf("Element Found! ");
                }else{
                    printf("Element Not Found! ");
                }
            }
            break;

            case 6:{
                int data;
                printf("Enter Data:");
                scanf("%d",&data);
                root=delete(root,data);
            }

            default:    printf("Invalid Choice.\n");
                        break;
        }
        getchar();
        printf("Continue?");
        scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
    return 0;
}