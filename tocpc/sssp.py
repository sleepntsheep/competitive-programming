from itertools import *

n, m = [int(v) for v in input().split()]

a = []

for i in range(m):
    a.append([int(v) for v in input().split()])

res = []

for destination in range(1, n+1):
    output = []

    for i in range(1, len(a) +1):
        for l in list(combinations(a, i)):
            output.append(l)
    
    # print(output)

    min = 200000000
    for combi in output:
        sum = 0
        st = 0
        d = 0
        hasCorrectDes = 0
        for path in combi:
            try:
                sum += path[1]
                st += path[0]
                d += path[2]
                if path[1] == destination:
                    hasCorrectDes = 1
            except Exception as e:
                print(e)
        if not hasCorrectDes: continue
        if sum - (st - 1) == destination:
            if d < min:
                min = d 
            else:
                ...
    res.append(min)

res[0] = 0

print(res)

