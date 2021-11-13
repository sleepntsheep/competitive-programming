n = int(input())
a = []

for i in range(n):
    ii = input()
    if ii not in a:
        a.append(ii)

        a.sort()

for t in a:
    print(t)
