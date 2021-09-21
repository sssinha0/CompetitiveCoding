#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0;
        int temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                temp++;
            }else{
                if(temp>res)
                    res=temp;
                    temp=0;
            }
        }
        if(temp>res)
            res=temp;
        return res;
    }
};