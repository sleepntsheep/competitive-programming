n = int(input())

arr = [int(v) for v in input().split()]
arr.sort()
for e in arr:
    print(e, end=' ')
