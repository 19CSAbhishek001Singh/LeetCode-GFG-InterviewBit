// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

struct Node{
       Node *links[26];
       vector<string> v;
       
       bool containsKey(char ch){
           return links[ch-'a'] != nullptr;
       }
       
       Node* getKey(char ch){
           return links[ch-'a'];
       }
       
       void put(char ch, Node *node){
           links[ch-'a'] = node;
       }
       
       void insertString(string str){
           v.push_back(str);
       }
       
       vector<string> getV(){
           return (v);
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
               node->insertString(word);
           }
       }
       
       vector<string> getStrings(string word){
           Node *node = root;
           for(int i = 0; i < word.length(); i++){
               if(!node->containsKey(word[i])){
                   return vector<string>{"0"};
               }
               node = node->getKey(word[i]);
           }
           return node->getV();
       }
   };
   class Solution{
     public:
   vector<vector<string>> displayContacts(int n, string contact[], string s){
       trie tri;
       set<string> st;
       
       for(int i = 0; i < n; i++){
           st.insert(contact[i]);
       }
       
       set<string>::iterator iter;
       for(iter = st.begin(); iter != st.end(); iter++){
           tri.insert(*iter);
       }
       
       vector<vector<string>> ans;
       string temp{};
       for(int i = 0; i < s.length(); i++){
           temp += s[i];
           vector<string> v = tri.getStrings(temp);
           ans.push_back(v);
       }
       
       return ans;
   }
};
// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends