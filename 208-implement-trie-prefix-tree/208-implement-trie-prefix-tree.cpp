class Trienode{
   public: 
  vector<Trienode*>child;
  bool isend;
    Trienode()
    {
        isend=false;
       child= vector<Trienode*> (26,NULL);
    }
    
};




class Trie {
public:
    Trienode *root;
    Trie() {
        root = new Trienode();
        
    }
    
    void insert(string word) {
      Trienode *curr=root;
        for(int i=0;i<word.length();i++)
        {
            int index=word[i]-'a';
            if(!curr->child[index])curr->child[index]=new Trienode();
            curr=curr->child[index];
        }
        curr->isend=true;  
    }
    
    bool search(string word) {
     Trienode *curr=root;
        for(int i=0;i<word.length();i++)
        {
            int index=word[i]-'a';
            if(!curr->child[index])return false;
            curr=curr->child[index];
        }
        return curr->isend;
    }
    
    bool startsWith(string prefix) {
     Trienode *curr=root;
        for(int i=0;i<prefix.length();i++)
        {
            int index=prefix[i]-'a';
            if(!curr->child[index])return false;
            curr=curr->child[index];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */