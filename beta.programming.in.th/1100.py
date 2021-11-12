n = int(input())
c = 0

foundState = [[[0 for i in range(10)] for i in range(3)] for i in range(n)]

for i in range(n):
    id = input()

    ind = 0
    
    for d in id:
        find = 0
        for v in foundState:
            if (v[ind][int(d)]) and not find:
                c += 1;
                find = 1
            if v[ind][int(d)]:
                print(id,' - ',v)

        foundState[i][ind][int(d)] = 1

        ind += 1

print(c)
