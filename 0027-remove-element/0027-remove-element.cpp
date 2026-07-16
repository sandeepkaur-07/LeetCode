class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int s= nums.size();
        vector<int> extra(s);
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                continue;
            }

            else{
                count+=1;
                extra[j]=nums[i];
                j++;
            }
        }
        for(int i= 0; i<count ;i++){
            nums[i]=extra[i];
        }
        return count;
    }
};