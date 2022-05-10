class TrieNode{
public:
    TrieNode *children[26];
    vector<int> index;
    TrieNode(){
        for (int i = 0; i < 26; i++){
            children[i] = NULL;
        }
    }
};

void insert(string s, TrieNode *head, int ind){
    TrieNode *temp = head;
    sort(s.begin(), s.end());
    for (char i : s){
        if (temp->children[i - 'a'] == NULL){
            temp->children[i - 'a'] = new TrieNode();
        }
        temp = temp->children[i - 'a'];
    }
    temp->index.push_back(ind);
}

void groupStrings(TrieNode *trie,
	vector<vector<string>> &groups, vector<string> &strList){
    if (trie == NULL){
        return;
    }
    vector<string> currGroup;
    // Traverse all strings ending at the current node.
    for (int i : trie->index){
        // Group all strings ending at the current node.
        currGroup.push_back(strList[i]);
    }
    if (currGroup.size() > 0){
        groups.push_back(currGroup);
    }
    // Iterate thorugh the children.
    for (int i = 0; i < 26; i++)
    {
        groupStrings(trie->children[i], groups, strList);
    }
}
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strList) { 
    TrieNode *trie = new TrieNode();
    int n = strList.size();
    for (int i = 0; i < n; i++){
        insert(strList[i], trie, i);
    }
    vector<vector<string>> groups;
    groupStrings(trie, groups, strList);
    return groups;
    }
};
      /*
       unordered_map<string,vector<string> > mymap;
        int n = strs.size();
        string temp;
        for(int i =0;i<n;++i){
            temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mymap[strs[i]].push_back(temp);
        }
        vector<vector<string> > result;
        for(auto itr=mymap.begin();itr!=mymap.end();++itr)
            result.push_back(itr->second);
        
        return result;
        */
