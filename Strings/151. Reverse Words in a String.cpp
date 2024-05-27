class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string temp = "";
        for(char c : s)
        {
            if(c == ' ')
            {
                if(!temp.empty())
                {
                    words.push_back(temp);
                    temp.clear();
                }
            }
            else
            {
                temp.push_back(c);
            }
        }
        if(!temp.empty())
        {
            words.push_back(temp);
        }
        reverse(words.begin(), words.end());

        string ans;
        for(string word : words)
        {
            ans += word + ' ';
        }
        if(!ans.empty())
        {
            ans.pop_back();
        }
        return ans;
    }
};
