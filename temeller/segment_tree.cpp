//segment tree algoritmasi
//1-)aralik sorgusu (max sorgusu bu kod icin) yapmak
//2-)nokta update yapmak

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back

int n,a[100005],PS[100005],tree[400005];

void build(int node,int start,int end){
	if(start==end){tree[node]=a[start];return ;}
	int mid=(start+end)/2;
	build(node*2,start,mid),build(node*2+1,mid+1,end);
	tree[node]=max(tree[node*2],tree[node*2+1]);
}

void update(int node,int start,int end,int index,int value){
	if(start>end || start>index || end<index)return ;
	if(start==end){
		tree[node]=value;
		return ;
	}
	int mid=(start+end)/2;
	update(node*2,start,mid,index,value),update(node*2+1,mid+1,end,index,value);
	tree[node]=max(tree[node*2],tree[node*2+1]);
}

int query(int node,int start,int end,int l,int r){
	if(start>end || start>r || end<l)return a[l];//etkisiz eleman
	if(start>=l && end<=r)return tree[node];
	int mid=(start+end)/2;
	return max(query(node*2,start,mid,l,r),query(node*2+1,mid+1,end,l,r));
}

int32_t main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	build(1,1,n);
	int q;
	cin>>q;
	while(q--){
		int type;
		cin>>type;
		if(type==1){
			int l,r;
			cin>>l>>r;
			//l'den r'ye kadari max yazdir.
			cout<<query(1,1,n,l,r)<<endl;
			continue;
		}
		if(type==2){
			int i,x;
			cin>>i>>x;
			//i'nci elemani xe esitle  -> a[i]:=x;
			update(1,1,n,i,x);
		}
	}
	return 0;
}
