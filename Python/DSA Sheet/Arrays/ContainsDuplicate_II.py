def containsDuplicate2(arr):
    window = set()
    L =0
    
    for R in range(len(arr)):
        if R - L > k:
            window.remove(arr[L])
        if arr[R] in window:
            return True
        window.add(arr[R])
    return False