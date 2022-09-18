struct Node {
    Node* links[26]; // for 26 characters
    int number[26] = {0}; // number array 
    
    bool containsKey(char ch) // function to check if it present or not
    {
        return (links[ch - 'a'] != NULL);
    }
    
    void put(char ch, Node* node) {
        links[ch - 'a'] = node; // put a character
        number[ch - 'a'] = 1;
    // since we are putting this character, 
    // so we visit this character first time
    }
    
    Node* get(char ch) // make a link to the character
    {
        return links[ch - 'a'];
    }
    
    void increaseNum(char ch) // we increase the count of visit
    {
        number[ch - 'a']++;
    }
    
    int getNum(char ch) // to retrive how many many number of times we visit this
    {
        return number[ch - 'a'];
    }
    
};

class Trie {
public:
    Node* root; // make root node
    Trie() {
        root = new Node(); // accquiring memory for the root node
    }
    
    void insert(string word) 
    {
        Node* node = root; // make a dummy pointer for the root node
        
        for(int i = 0; i < word.length(); i++)
        {
            // if on the node i m currently standing does 
            // not contain this particular character of word[i]
            // so for this we have to make a new referenced node
            if(!node -> containsKey(word[i]))
            {
                node -> put(word[i], new Node());
            } 
            else // else if already present that means we see this character again so increase nums
             node -> increaseNum(word[i]);
            
            // after this move to this referenced node
            node = node -> get(word[i]);
        }
    }
    
    // it will give me answer for each word
    int takeAns(string word)
    {
        int ans = 0; // to count my answer
        
        Node* node = root; // make a dummy pointer for the root node
        
        for(int i = 0; i < word.size(); i++)
        {
            if(!node -> containsKey(word[i]))  // if trie does not contain this particular character, so return answer from here
                return ans;
            else 
                ans += node -> getNum(word[i]); // else add to answer
            
             node = node -> get(word[i]); // and move to next referenced node
        }
        
        return ans; // finally return answer
    }
};

class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        int n = words.size(); // extract size of words array
        
        Trie trie; // define object for class trie
        
        // put all strings of words array into the trie
        for(int i = 0; i < n; i++)
        {
            trie.insert(words[i]);
        }
        
        vector<int> ans(n); // vector that contains my answer
 
        // extract answer for each word
        for(int i = 0; i < n; i++)
        {
            ans[i] = trie.takeAns(words[i]);
        }
        
        return ans; // finally return answer
    }
};