#include<stdio.h> 
#include<stdlib.h> 
struct Node{
    int data; 
    struct Node* left, *right;
}; 

void insert(struct Node** root){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value you want in the tree: "); 
    scanf("%d",&temp->data); 
    temp->left = NULL; 
    temp->right = NULL; 

    if(*root==NULL){
        *root = temp; 
        return; 
    }

    struct Node* parent = *root, *curr = *root ; 
    while(curr){
        parent = curr; 
        if(temp->data>curr->data){
            curr = curr->right; 
        }
        else{
            curr = curr->left;
        }
    }
    if(parent->data> temp->data){
        parent->left = temp; 

    }
    else{
        parent->right = temp; 

    }
    
}

void inorderTraversal(struct Node* n){
    if(n==NULL){
        return; 
    }
    inorderTraversal(n->left); 
    printf("%d ", n->data); 
    inorderTraversal(n->right);
}

void preorderTraversal(struct Node* n){
    if(n!=NULL){
       
    printf("%d ", n->data); 
    preorderTraversal(n->left); 
    preorderTraversal(n->right); 
        
    }
 
}

void postOrderTraversal(struct Node* n){
    if(n==NULL){
        return;
    }
    postOrderTraversal(n->left);
    postOrderTraversal(n->right); 
    printf("%d ", n->data); 
}

int main(){
struct Node* root = NULL;
insert(&root); 
insert(&root);
insert(&root);
insert(&root);
insert(&root);
insert(&root);
insert(&root);
insert(&root);
insert(&root);
insert(&root);
insert(&root);
insert(&root);
insert(&root);
insert(&root);
insert(&root);
printf("\nPre Order traversal: "); 
preorderTraversal(root);
printf("\nIn Order traversal: ");
inorderTraversal(root);
printf("\nPost Order travesal: ");
postOrderTraversal(root);
return 0;
}