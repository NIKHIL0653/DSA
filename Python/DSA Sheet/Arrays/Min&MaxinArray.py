def set_mini(arr):
    mini = float('inf')
    for num in arr:
        if num < mini:
            mini = num
            
    return mini
    

def set_maxi(arr):
    maxi = float('-inf')
    for num in arr:
        if num > maxi:
            maxi = num
            
    return maxi
    
# Driver Code

if __name__ == "__main__":
    arr = [19, 12, 31, 44, 25]
    print("Minimum Number: ", set_mini(arr))
    print("Maximum Number: ", set_maxi(arr))