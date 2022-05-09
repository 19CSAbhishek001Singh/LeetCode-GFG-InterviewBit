// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

     struct Node{
      Node *links[26];
      bool flag = false;
      bool containsKey(char ch){
          return links[ch-'a'] != NULL;
      }
      void put(char ch,Node *node){
          links[ch-'a'] = node;
      }
      Node* getKey(char ch){
          return links[ch-'a'];
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
      
   void insert(string word){
       Node *node = root;
       for(int i = 0; i < word.length(); i++){
           if(!node->containsKey(word[i])){
               node->put(word[i],new Node());
           }
           node = node->getKey(word[i]);
        }
       node->setEnd();
   }
      
   bool search(string word){
       Node *node = root;
       for(int i = 0; i < word.length(); i++){
           if(!node->containsKey(word[i])){
               return (false);
           }
           node = node->getKey(word[i]);
       }
       return node->isEnd();
   }
};
  
class Solution{
   public:
   // A : given string to search
   // B : vector of available strings
   trie tri;
   
   bool helper(string str,int i,int j){
      if(i > j) return (false);
      
      if(tri.search(str.substr(i,j-i+1))) return (true);
      
      string s1{};
      for(int k = i; k < j; k++){
          s1 += str[k];
          if(!tri.search(s1)) continue;
          if(helper(str,k+1,j)) return (true);
      }
      return (false);
  }
  
  int wordBreak(string A, vector<string> &B) {
      
      for(auto &str: B){
          tri.insert(str);
      }
      return helper(A,0,A.length()-1) == true ? 1 : 0;
  }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends