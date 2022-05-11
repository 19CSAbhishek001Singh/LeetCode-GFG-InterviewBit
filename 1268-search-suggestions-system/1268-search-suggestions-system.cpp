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
                   return vector<string>{};
               }
               node = node->getKey(word[i]);
           }
           return node->getV();
       }
   };
   class Solution{
     public:
   vector<vector<string>> suggestedProducts(vector<string>& contact, string s){
       trie tri;
       set<string> st;
       int n=contact.size();
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
            if(v.size()>3){
                vector<string> s(v.begin(),v.begin()+3);
                 ans.push_back(s);
            }
           else
           ans.push_back(v);
       }
       
       return ans;
   }
   };