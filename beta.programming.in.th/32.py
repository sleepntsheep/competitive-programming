input()
li = [int(v) for v in input().split()]
li.sort()
if li[0] == 0:
    for i, n  in enumerate(li):
        if n != 0:
            li[0] = li[i]
            li[i] = 0
            break
print(''.join([str(i) for i in li]))
