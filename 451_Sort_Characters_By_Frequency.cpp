class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
            }
            else mp[s[i]]=1;
        }
        vector<vector<int>>note;
        for(auto x:mp){
            int ch=x.first;
            int count=int(x.second);
            vector<int>temp={count,ch};
            note.push_back(temp);
        }
        sort(note.rbegin(),note.rend());
       
        s="";
        for(int i=0; i<note.size(); i++){
        
                for(int k=1; k<=note[i][0]; k++){
                    s+=char(note[i][1]);
                }
            
        }
        return s;
        
    }
};
