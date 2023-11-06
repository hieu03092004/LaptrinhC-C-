#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node* makeNode(int u){
	node*newNode=new node;
	//cau truc cap phat dong 1 not moi
	newNode ->data =u;
	newNode->left=newNode->right=NULL;
	return newNode;
}
void makeRoot(node*root,int u,int v,char c){
	if(c=='L')
		root->left=makeNode(v);
	else
		root->right=makeNode(v);
}
void insertNode(node*root,int u,int v,char c){
	if(root==NULL)
		return;
	if(root->data==u)
		makeRoot(root,u,v,c);
	else
	{
		insertNode(root->left,u,v,c);
		insertNode(root->right,u,v,c);
	}
}
void spiral(node*root){
	stack<node*>s1,s2
	s1.push(root);
	while(!s1.empty() !! s2.empty()){
		while(!s1.empty()){
			root *top=st.top();
			cout<<root->data;
			st.pop();
			if(top->right!=NULL)
				s1.push(top->right);
			if(top->left!=NULL)
				s2.push(top->right);
		}
		while(!s2.empty()){
			root*top=s2.top();
			cout<<root->data;
			s2.pop();
			if(top->left!=NULL)
				s2.push(top->left);
			if(top->right!=NULL)
				s2.push(top->right);
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	node*root=NULL;
	int n;
	cin>>n;
	//n la so canh
	for(int i=0;i<n;i++){
		int u,v;
		char c;
		cin>>u>>v>>c;
		if(root==NULL){
			 root=makeNode(u);
			makeRoot(root,u,v,c);
		}
		else{
			//tuc la luc nay da co mot vai not roi
			insertNode(root,u,v,c);

		}
	}
}