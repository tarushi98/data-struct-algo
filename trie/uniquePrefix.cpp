#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;
class TrieNode{
    public:
        char data;
        int freq;
        unordered_map<char,TrieNode*> kids;
        bool terminal;
        TrieNode(char val)
        {
            data = val;
            terminal = false;
            freq = 1;
        }
};
class Trie{
    public:
        TrieNode* root = NULL;
        Trie()
        {
            root = new TrieNode('\0');
        }

        TrieNode* getRoot()
        {
            return root;
        }

        void insert(string s)
        {
            TrieNode* tmp = root;
            for(int i=0;i<s.length();i++)
            {
                if(tmp->kids.count(s[i]))
                {
                    tmp->kids[s[i]]->freq+=1;
                }
                else
                {
                    TrieNode* neww = new TrieNode(s[i]);
                    tmp->kids[s[i]] = neww;
                }

                tmp = tmp->kids[s[i]];
                //cout<<tmp->data<<" "<<tmp->freq<<endl;
            }

            tmp->terminal = true;
        }

        void uniquePrefix(TrieNode* tmp,char ans[],int i)
        {
            if(tmp->freq == 1 and tmp->data !='\0')
            {
                ans[i] = '\0';
                cout<<ans<<",";
                return;
            }

            for(auto m:tmp->kids)
            {   //cout<<tmp->data<<" "<<tmp->freq<<" "<<m.first<<endl;
                ans[i] = m.first;
                uniquePrefix(m.second,ans,i+1);
                
            }
        }
};
int main()
{   Trie t;
    vector<string>arr = {"duck","dove","ice","icebaby","dog"};
    for(int i=0;i<arr.size();i++)
    {
            t.insert(arr[i]);
    }
    
    char ans[256];
    t.uniquePrefix(t.getRoot(),ans,0);  
    return 0;
}
