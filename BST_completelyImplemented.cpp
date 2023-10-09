#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node* parent;
    node(int dt){
        data=dt;
        right=NULL;
        left=NULL;
    }
};

node* inorderSucc(node* root){
    node* curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }return curr;
}

node* searchBST(node* root,int ele){
    if(root==NULL){return NULL;}
    else if(ele==root->data){return root;}
    else if(ele>root->data){
        searchBST(root->right,ele);
    }else{
        searchBST(root->left,ele);
    }
}

node* insertBST(node* root,node* parnt,int data){
    if(root==NULL){
        node* temp=new node(data);
        temp->parent=parnt;
        return temp;
    }
    else if(root->data<data){
        root->right=insertBST(root->right,root,data);
    }else{
        root->left=insertBST(root->left,root,data);
    }
};

void inorderBST(node* root){
    if(root==NULL){return;}
    else{
        inorderBST(root->left);
        cout<<root->data<<" ";
        inorderBST(root->right);
    }
}

node* deleteBST(node* root,int ele){
    node* ntd=searchBST(root,ele);
    if(ntd==root && ntd->right==NULL && ntd->left==NULL){
        free(ntd);
    }else if(ntd->left==NULL){
        if(ntd->parent->right==ntd){ntd->parent->right=ntd->right;}
        else{ntd->parent->left=ntd->right;}
        free(ntd);
    }else if(ntd->right==NULL){
        if(ntd->parent->right==ntd){ntd->parent->right=ntd->left;}
        else{ntd->parent->left=ntd->left;}
        free(ntd);
    }else{
        node* part=inorderSucc(ntd->right);
        ntd->data=part->data;
        if(part->parent->left->data==part->data){
            part->parent->left=part->right;
        }
        else{
            part->parent->right=part->right;
        }  
        free(part);

    }
}

int main(){
    node* root=NULL;
    root=insertBST(root,NULL,15);root->parent=NULL;
    insertBST(root,NULL,3);
    insertBST(root,NULL,18);
    insertBST(root,NULL,5);
    insertBST(root,NULL,4);
    insertBST(root,NULL,14);
    insertBST(root,NULL,7);
    insertBST(root,NULL,9);
    insertBST(root,NULL,8);
    insertBST(root,NULL,11);
    inorderBST(root);
    cout<<'\n';
    int key;cout<<"Enter key to find in the BST: ";cin>>key;
    if(searchBST(root,key)==NULL){cout<<key<<" not found\n";}
    else{cout<<key<<" found\n";}
    int k;cout<<"Enter number to search: ";cin>>k;
    node* fsucc=searchBST(root,k);
    node* a= inorderSucc(fsucc->right);
    if(fsucc!=root){cout<<"Parent: "<<fsucc->parent->data<<"\n";}
    else{cout<<"Parent: NULL\n";}
    if(fsucc->right!=NULL){cout<<"Succ: "<<a->data<<"\n";}
    else{cout<<"Succ: NULL\n";}
    int y;cout<<"Enter element to delete: ";cin>>y;
    deleteBST(root,y);
    inorderBST(root);
}
