def search(nums, target):
    l = 0
    r = len(nums) - 1
    
    while l <= r:
        mid = l + (r-l) // 2

        if nums[mid] == target:
            return mid
        
        elif nums[l] <= mid:
            if nums[l] <= target <= nums[mid]:
                r = mid - 1
            else:
                l = mid + 1
        
        else:
            if nums[mid] <= target <= nums[r]:
                l = mid + 1
            else:
                r = mid - 1
    return -1

if "__name__" == "__main__":
    nums = [4,5,6,7,0,1,2]
    target = 0
    print(search(nums, target))  # Output: 4
    