def QuickSort(arr, low, high):
    if low < high:
        pivot = partition(arr, low, high)

        QuickSort(arr, low, pivot - 1)
        QuickSort(arr, pivot + 1, high)

def partition(arr, low, high):
    pivot = arr[high]
    l = low - 1
    for i in range(low,high):
        if arr[i] <= pivot:
            l += 1
            t = arr[i]
            arr[i] = arr[l]
            arr[l] = t
    l += 1
    t = arr[high]
    arr[high] = arr[l]
    arr[l] = t
    return l

arr = [2,1,5,9,3,3,6]
print(arr)
QuickSort(arr, 0, len(arr)-1)
print(arr)