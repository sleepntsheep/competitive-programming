from itertools import combinations


n = int(input())
c = 0
cnt_dict =  {}

def fac(n):
    if n <= 0:
        return 1
    else:
        return n*fac(n-1)

for i in range(n):
    v = int(input())
    if v not in cnt_dict:
        cnt_dict[v] = 1
    else:
        cnt_dict[v] += 1

for k in cnt_dict:
    v = cnt_dict[k]
    if v == 1: r = 0
    elif v == 2: r = 1 
    else: r = fac(v)/(2*fac(v-2))
    c += r

for co in combinations(cnt_dict, 2):

    met = 0
    for ch in range(3):
        if co[0] % (10 ** (ch + 1)) // (10 ** ch) == co[1] % (10 ** (ch + 1)) // (10 ** ch):
            met = 1
    if not met: continue
    zzz = cnt_dict[co[0]]
    zzzz = cnt_dict[co[1]]
    c += zzz * zzzz

print(c)
