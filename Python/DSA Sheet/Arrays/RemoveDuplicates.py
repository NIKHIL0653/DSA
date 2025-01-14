def removeDuplicates(nums):
        unique = sorted(set(nums))
        nums[:len(unique)] = unique
        # return len(unique)
        return unique
    
if __name__ == "__main__":
    nums = [3,1,4,5,3,7,1]
    result = removeDuplicates(nums)
    print(result)