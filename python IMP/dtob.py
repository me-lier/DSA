n = int(input())
sum = 0
c = 0
while(n>0):
    if n&1 == 1:
        sum+=(10**c)
    c=c+1
    n = n>>1
print(sum)