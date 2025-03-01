def SelectionSort(arr):
    for i in range(len(arr)-1):
        min = i
        for j in range(i+1, len(arr)):
            if arr[min] > arr[j]:
                min = j
        if min != i:
            arr[min], arr[i] = arr[i], arr[min]

arr = [7,3,9,1,4,2]
print(arr)
SelectionSort(arr)
print(arr)