class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        // maanlo ki array me koi element nhi hai (edge case)
        // if(nums.size() == 0) return -1; 

        while(l <= r){
            int mid = l + (r-l)/2;
            //check karo ki mid element target ke equal hai ki nhi
            if(nums[mid]==target){ 
            return mid;
            }
            
            // ab yaad rakho ki rotated sorted array ques me 2 sorted array hote hai
            //left and right sorted array
            //fir check karo ki leftmost element of array target se chhota hai ya bada
            //agar bada hai toh left ko mid se ek aage krdo


            // check karo ki target kidhar hoga aur fir sirf uss 
            //extracted array me search karo
            if(nums[l] <= nums[mid]){
                //agr target left int se bada hai lekin mid se chhota hai
                //matlb mid aur left ke beech me khi hoga
                // toh right ko mid ke aage le aao
                if(nums[l] <= target && target <= nums[mid]){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            else{
                // agr target mid se bada hai lekin right se chhota hai
                // left ko mid ke aage le aao
                if(nums[mid] <= target && target <=nums[r]){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
        }
        return -1; // number hi nhi hai toh -1 return krdo
    }
};