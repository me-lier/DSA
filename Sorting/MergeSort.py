def merge(arr, low, high, mid):
    n1 = mid-low+1
    n2 = high-mid

    l = [arr[low+i] for i in range(n1)]
    r = [arr[mid+1+i] for i in range(n2)]

    i = j = 0
    k = low
    while i < n1 and j < n2:
        if l[i] <= r[j]:
            arr[k] = l[i]
            k += 1
            i += 1
        else:
            arr[k] = r[j]
            k += 1
            j += 1
    
    while i < n1:
        arr[k] = l[i]
        k += 1
        i += 1
    
    while j < n2:
        arr[k] = r[j]
        k += 1
        j += 1

def MergeSort(arr, low, high):
    if low < high:
        mid = low + (high - low) // 2
        MergeSort(arr, low, mid)
        MergeSort(arr, mid + 1, high)

        merge(arr, low, high, mid)

arr = [2,1,5,3,6,3]
print(arr)
MergeSort(arr, 0 , len(arr)- 1)
print(arr)