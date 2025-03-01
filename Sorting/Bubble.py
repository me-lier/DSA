def BubbleSort(arr):
    for i in range(len(arr)):
        flag = True
        for j in range(len(arr)-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                flag = False
        if flag:
            return
        

arr = [2,4,5,3,1]
print(arr)
BubbleSort(arr)
print(arr)
