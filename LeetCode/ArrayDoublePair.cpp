class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int> mp;
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(mp.count(arr[i])){
                auto it=mp.find(arr[i]);
                mp[it->first]=it->second+1;
            }else
                mp.insert({arr[i],1});
            if(arr[i]==0)
                count++;
        }
        if(count%2!=0)
                return false;
        sort(arr.begin(),arr.end());
         unordered_map<int,int>::iterator it;
            for(it=mp.begin();it!=mp.end();it++){
                cout<<it->first<<" "<<it->second<<" ,";
            }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                // cout<<"sah";
                auto x=mp.find(arr[i]);
                if(x->second!=0&&x->first%2==0){
                    
                    if(mp.count((x->first)/2)){
                        auto y=mp.find((x->first)/2);
                        if(y->second!=0){
                        mp[y->first]=y->second-1;
                        mp[x->first]=x->second-1;
                            // cout<<"shas";
                        }
                    }
                }
            }else if(arr[i]>0){
                auto x=mp.find(arr[i]);
                if(x->second!=0){
                    if(mp.count(x->first*2)){
                        auto y=mp.find(x->first*2);
                        if(y->second!=0){
                        mp[y->first]=y->second-1;
                        mp[x->first]=x->second-1;
                        }
                    }
                }
            }
            
        }
        unordered_map<int,int>::iterator it1;
            for(it1=mp.begin();it1!=mp.end();it1++){
               if(it1->second!=0&&it1->first!=0)
                    return false;
            }
       
       
        return true;
    }
};