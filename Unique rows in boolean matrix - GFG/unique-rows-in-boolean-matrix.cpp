// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	vector<vector<int>> vec = uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}
// } Driver Code Ends

struct Node{
   Node *links[2];
   bool flag = false;
   
   bool containsKey(int x){
       return links[x] != NULL;
   }
   
   void put(int x,Node *node){
       links[x] = node;
   }
   
   Node* getKey(int x){
       return links[x];
   }
   
   void setEnd(){
       flag = true;
   }
   
   bool isEnd(){
       return (flag);
   }
};

class trie{
   private:
   Node *root;
   
   public:
   trie(){
       root = new Node();
   }
   
   void insert(vector<int> arr){
       Node *node = root;
       for(int i = 0; i < arr.size(); i++){
           if(!node->containsKey(arr[i])){
               node->put(arr[i],new Node());
           }
           node = node->getKey(arr[i]);
       }
       node->setEnd();
   }
   
   bool search(vector<int> arr){
       Node *node = root;
       for(int i = 0; i < arr.size(); i++){
           if(!node->containsKey(arr[i])){
               return (false);
           }
           node = node->getKey(arr[i]);
       }
       return node->isEnd();
   }
};

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col){
   trie tri;
   vector<vector<int>> ans;
   for(int i = 0; i < row; i++){
       vector<int> v;
       for(int j = 0; j < col; j++){
           v.push_back(M[i][j]);
       }
       
       if(tri.search(v)) continue;
       tri.insert(v);
       ans.push_back(v);
   }
   
   return (ans);
}


/*
    vector<vector<int>> vv;
    set<vector<int>> sv;
    for(int i=0;i<row;i++){
        vector<int> v (M[i],M[i]+col);
        if(sv.count(v)==0){
            vv.push_back(v);
            sv.insert(v);
        }
    }
    return vv;
    */