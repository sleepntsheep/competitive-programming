import sys

fish = [int(v) for v in input().split(',')]

for _ in range(int(sys.argv[1])):
    c = 0
    for index, f in enumerate(fish):
        if fish[index] == 0:
            fish[index] = 6
            c+=1
        else:
            fish[index] -= 1
    for i in range(c):
        fish.append(8)

print(len(fish))
