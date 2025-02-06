//inversion sayma
//dynamic segment tree
//https://www.hackerrank.com/challenges/ctci-merge-sort/problem
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back

int n,a[100005],PS[100005],tree[400005];

struct Node{
	Node* left;
	Node* right;
	int value;
	Node(){
		left=NULL;
		right=NULL;
		value=0;
	}
};

void update(Node* node,int start,int end,int index,int value){
	if(node==NULL || start>index || end<index)return ;
	if(start==end){
		node->value+=value;
		return ;
	}
	int mid=(start+end)/2;
	if(node->left==NULL && index<=mid)node->left=new Node();
	if(node->right==NULL && index>mid)node->right=new Node();
	update(node->left,start,mid,index,value),update(node->right,mid+1,end,index,value);
	int sum=0;
	if(node->left!=NULL)sum+=node->left->value;
	if(node->right!=NULL)sum+=node->right->value;
	node->value=sum;
}

int query(Node* node,int start,int end,int l,int r){
	if(node==NULL || start>r || end<l)return 0;
	if(start>=l && end<=r)return node->value;
	int mid=(start+end)/2;
	return query(node->left,start,mid,l,r)+query(node->right,mid+1,end,l,r);
}

int32_t main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		Node* root=new Node();
		int cevap=0;
		for(int i=1;i<=n;i++){
			cevap+=query(root,1,10000000,a[i]+1,10000000);
			update(root,1,10000000,a[i],1);
		}
		cout<<cevap<<endl;
		//~ free(root);
	}
	return 0;
}
