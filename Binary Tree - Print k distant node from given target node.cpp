#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* lchild;
		Node* rchild;
		Node(int d){
			data=d;
			lchild=NULL;
			rchild=NULL;
		}
};

Node* InputTree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	Node* newNode= new Node(d);
	newNode->lchild=InputTree();
	newNode->rchild=InputTree();
	return newNode;
}


void leveltraverseBFS(Node* root){
	if(root==NULL)
		return;
	queue<pair<Node*,int> > q;
	q.push(make_pair(root,1));
	int level=1;
	while(!q.empty()){
		pair<Node*,int> p=q.front();
		q.pop();
		Node* n=p.first;
		int l=p.second;
		
		if(l!=level){
			cout<<endl;
			level=l;
		}
		cout<<n->data<<" ";
		
		if(n->lchild)
			q.push(make_pair(n->lchild,l+1));
		if(n->rchild)
			q.push(make_pair(n->rchild,l+1));
		
		
	}
}

void printKthLevel(Node* root, int k){
	if(root==NULL)
		return ;
	if(k==0){
		cout<<root->data<<" ";
		return;
	}
	printKthLevel(root->lchild,k-1);
	printKthLevel(root->rchild,k-1);
}

int printKdistantNode(Node* root,Node* target,int k){
	if(root==NULL){
		return -1;
	}
	
	if(root==target){
		printKthLevel(root,k);
		return 0;  //Means Current node is 0 distance away from target node
	}
	
	//lchildDist recieves distance of its left Subtree is far from target
	int lchildDist=printKdistantNode(root->lchild,target,k);
	if(lchildDist!=-1){
		if(lchildDist+1==k){
			cout<<root->data<<" ";
		}
		else{
			int effectiveK=k-lchildDist-2;
			if(effectiveK>=0)
			{
				printKthLevel(root->rchild,effectiveK);
			}
		}
		
		return lchildDist+1;
	}
	
	//rchildDist recieves the distance of right subtree is far from target Node
	int rchildDist=printKdistantNode(root->rchild,target,k);
	if(rchildDist!=-1){
		if(rchildDist+1==k){ //means current node is kth node from target
			cout<<root->data<<" ";
		}
		else{
			int effectiveK=k-2-rchildDist; //finds the distance (levels) it has to travel in left Subtree
			if(effectiveK>=0){
				printKthLevel(root->lchild,effectiveK);
			}
		}
		return rchildDist+1;
	}
	return -1;
}


int main(){
	Node* root=InputTree(); //Input: 20 8 4 -1 -1 12 10 -1 -1 14 -1 -1 22 -1 -1
	cout<<"Tree: \n";
	leveltraverseBFS(root);
	cout<<"\n\n";
//	Node* target=root->lchild;
	Node* target=root->lchild->rchild->rchild;
	int k=3;
	printKdistantNode(root,target,k);
	
	
}
