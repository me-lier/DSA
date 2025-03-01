def InsertionSort(arr):
    for i in range(1,len(arr)):
        j = i - 1
        curr = arr[i]
        while j >= 0 and curr < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = curr

arr = [2,4,1,5,6]
print(arr)
InsertionSort(arr)
print(arr)