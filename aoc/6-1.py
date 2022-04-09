import sys

fish = [int(v) for v in input().split(',')]

for _ in range(int(sys.argv[1])):
    print(_)
    temp = fish
    #print(temp)
    for index, f in enumerate(fish):
        if fish[index] == 0:
            temp[index] = 6
            temp.append(9)
        else:
            temp[index] -= 1
    fish = temp

print(len(fish))
