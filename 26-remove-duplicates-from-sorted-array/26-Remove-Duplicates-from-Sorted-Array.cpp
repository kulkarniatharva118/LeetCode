class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int read=1;
        int write=1;
        while(read<nums.size()){
            if(nums[read]==nums[(write-1)]){
                read++;  
            }
            else{
                nums[write]=nums[read];
                read++;
                write++;
            }
        }

        return write;
    }
};