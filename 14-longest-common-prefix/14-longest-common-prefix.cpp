struct Node{
  Node *links[26];
  bool isEnd=false;
};
class Trie{
    private:
    Node *root;
    public:
    Trie(){
    root=new Node();
    }
    void insert(string s){
        Node* node = root;
        for(char &ch:s){
            if(!node->links[ch-'a'])
            node->links[ch-'a']= new Node();
            node=node->links[ch-'a'];
        }
        node->isEnd=true;
    }
    void search(string s){
        Node* node = root;
        for(char &ch:s){
            if(!node->links[ch-'a']){
                node->isEnd = true;
                break;
            }
            node=node->links[ch-'a'];
        }
        node->isEnd = true;
    }
    string prefix(string s){
        Node* node = root;
        string res = "";
        for(char &ch:s){
            if(!node->isEnd){
                res+=ch;
            }else{
                break;
            }
            node=node->links[ch-'a'];
        }
        return res;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n = s.size();
        if(n==0)
            return "";
        if(n==1)
            return s[0];
        Trie* t = new Trie();
        t->insert(s[0]);
        for(int i=1;i<n;i++)
            t->search(s[i]);
        
        return t->prefix(s[0]);
    }
};
    /*
     int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;
    }
    */