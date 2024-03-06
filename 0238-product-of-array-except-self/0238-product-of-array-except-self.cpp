#include <vector>
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cnt=0;
        int exceptZero = 1;
        int total = 1;
        vector<int> ans;

        //전체 곱을 만들어 놓는다
        for(int i=0; i< nums.size(); i++){
            if(nums[i]==0){
                cnt++;
            }else{
                exceptZero *= nums[i];
            }
            total *= nums[i];
        }

        for(int i=0; i<nums.size(); i++){
            if(cnt > 1){
                ans.push_back(0);
            }else if(cnt ==1){
                if(nums[i]==0){
                    ans.push_back(exceptZero);
                }else{
                    ans.push_back(0);
                }
            }else{
                ans.push_back(total/nums[i]);
            }
        }

        return ans;

    }
};