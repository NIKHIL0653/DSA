def reverse(arr):
    low = 0
    high = len(arr) - 1
    while low < high:
        arr[low], arr[high] = arr[high], arr[low]
        low += 1
        high -= 1
        
    return arr

if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5]
    print(reverse(arr))  # Output: [5, 4, 3, 2, 1]