//sordugumuz string sozlugumuzdeki kac tane sozcukte prefix olarak geciyor
//trie
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back

int n,cevap;
string s;

struct Node{
	Node* komsu[26];
	int count;
	Node(){
		for(int i=0;i<=25;i++)komsu[i]=NULL;
		count=0;
	}
};

void add_trie(Node* node,string s){
	node->count++;
	for(int i=0;i<(int)s.size();i++){
		int x=s[i]-'a';
		if(node->komsu[x]==NULL)node->komsu[x]=new Node();
		node=node->komsu[x];
		node->count++;
	}
}

void ask_trie(Node* node,string s){
	for(int i=0;i<(int)s.size();i++){
		int x=s[i]-'a';
		if(node->komsu[x]==NULL){
			return ;
		}
		node=node->komsu[x];
	}
	cevap=node->count;
}


int32_t main(){
	int t;
	cin>>n>>t;
	Node* root=new Node();
	for(int i=1;i<=n;i++){
		cin>>s;
		add_trie(root,s);//sozlugumuzdeki butun kelimeleri trie yapimiza ekledik
	}
	while(t--){
		cin>>s;
		cevap=0;
		ask_trie(root,s);
		cout<<cevap<<endl;
	}
	return 0;
}
