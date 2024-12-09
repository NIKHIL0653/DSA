class Solution {
public:
    int findMin(vector<int>& nums) {
        // minimum element search krne ke liye BS lagayenge
        // lekin idhar array sorted nhi hai toh pta krna hoga ki sbse chhota element
        // kidhar ho skta hai mid ke lleft me ya right me

        //ek tareeka hai ki pivot find krlo (mtlb voh point jaha right element < left element)
        //but better tareeka hai

        // rotated sorted array me 2 arrays hote hai left sorted and right sorted array
        // hame bs pta krna hai ki kis wale array me answer hoga

        int left = 0;
        int right = nums.size() - 1;
        int res = nums[0];
        
        // BS start karo idhar, yaad rakho ki res ko update krte rehna hai
        while(left <= right){
            // edge case dodge krne ke liye if else
            // ho skta hai ki array ko itna baar rotate kiya hoga ki fir se sorted hogya
            if(nums[left] < nums[right]){
                res = min(res, nums[left]);
                break;
            }

            int mid = (left + right)/2; // mid nikal ke re ko update krdo
            res = min(res, nums[mid]);// ho skta hai ki ye minimum hai

            if(nums[mid]>=nums[left]){ 
                // idhar pata kr rhe hai ki mid left sorted array me hai
                // ye right sorted array me
                left = mid + 1;
            }
            else 
            {
                right = mid - 1;
            }
    }
    return res; // return kardo
    }
};