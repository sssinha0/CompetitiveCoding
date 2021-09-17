#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> res;
        unordered_map<int,int> mp;
        int n=nums1.size();
        int m=nums2.size();
        vector<int> arr;
        for(int i=0;i<nums1.size();i++){
            if(!mp.count(nums1[i])){
                mp.insert({nums1[i],1});
            }else{
                mp[nums1[i]]=mp[nums1[i]]+1;
            }
        }
            
        for(int i=0;i<nums2.size();i++){
            if(mp.count(nums2[i])){
                if(mp[nums2[i]]!=0){
                arr.push_back(nums2[i]);
                mp[nums2[i]]=mp[nums2[i]]-1;
                }
            }
        }
        return arr;
    }
};