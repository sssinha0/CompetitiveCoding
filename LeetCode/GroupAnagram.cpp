class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string> > v;
        vector<vector<string> > arr;
        for(int i=0;i<strs.size();i++){
            vector<int> temp(26,0);
            int count=strs[i].size();
            string t=strs[i];
            sort(strs[i].begin(),strs[i].end());
            v[strs[i]].push_back(t);
            // for(int j=0;j<count;j++){
            //     temp[strs[i][j]-'a']=temp[strs[i][j]-'a']+1;
            // }
            // string s="";
            // for(int i=0;i<26;i++){
            //     if(temp[i]!=0)
            //     s+=(char)(97+i);
            // }
            // cout<<s;
            // v[s].push_back(strs[i]);
        }
        for(auto x: v){
            arr.push_back(x.second);
        }
        return arr;
    }
};