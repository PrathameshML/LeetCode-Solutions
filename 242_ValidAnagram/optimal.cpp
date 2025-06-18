class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>mp;
    

        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
            }
            else {
                mp[s[i]]=1;
            }
        }

         for(int i=0; i<t.size(); i++){
           if( mp.find(t[i])!=mp.end()){
                if(mp[t[i]]==0) return false;
                else mp[t[i]]--;
            }
            else return false;
         }
         return true;

    }
};
