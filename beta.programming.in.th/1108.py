n, k = [int(v) for v in input().split()]

all = [int(v) for v in input().split()]

all.sort(reverse=True)

r = 0

past = None

for i in all[:k]:
    print(i)
    if i != past:
        r += i
    past = i

print(r)
