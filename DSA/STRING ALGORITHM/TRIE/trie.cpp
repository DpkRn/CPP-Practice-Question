#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int mod=(int)(1e9+7);
const int INF = 9e15;
 
class TrieNode{
    public:
    bool isCompleted;
    string str="";
    TrieNode* children[26];
    TrieNode(){
        isCompleted=false;
        memset(children,0,sizeof(children));
    }
};
class Trie{
    TrieNode* root;
    public:
    Trie(){
        root=new TrieNode();
    }

    void insert(string word){
        TrieNode* node=root;
        for(char ch:word){
            int idx=ch-97;
            if(node->children[idx]==NULL) node->children[idx]=new TrieNode();
            node=node->children[idx];
        }
        node->str=word;
        node->isCompleted=true;
    }

    bool search(string word){
        TrieNode* node=root;
        for(auto ch:word){
            int idx=ch-97;
            if(node->children[idx]==NULL) return false;
            node=node->children[idx];
        }
        return node->isCompleted;
    }

    bool isStartWith(string word){
        TrieNode* node=root;
        for(auto ch:word){
            int idx=ch-97;
            if(node->children[idx]==NULL) return false;
            node=node->children[idx];
        }
        return true;
    }
};
int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   vector<string> words={"apple","deepak","deep","ape","app"};
   Trie trie;
   for(auto word:words){
    trie.insert(word);
   }

   cout<<trie.search("deepak")<<endl;//true;
   cout<<trie.search("apps")<<endl; //false;
   cout<<trie.search("deep")<<endl; //true;
   cout<<trie.search("ape")<<endl;//true;
   cout<<trie.search("apples")<<endl; //false;
   cout<<trie.search("deep")<<endl; //true;

   cout<<trie.isStartWith("ap")<<endl; //true;
   cout<<trie.isStartWith("appl")<<endl;//true;
   cout<<trie.isStartWith("apps")<<endl;//false;

   
return 0;
}
