n, t, p = (int(v) for v in input().split())

a = []

score = [0 for i in range(t)] # score of all tasks
scoredict = {}
countdict = {}

for i in range(n): 
    a.append([int(v) for v in input().split()])

for chote in range(t): 
    for i in range(n): 
        if not a[i][chote]: score[chote] += 1 

for player in range(n):
    for chote in range(t): 
        if player not in scoredict : scoredict[player] = 0
        scoredict[player] += score[chote] if a[player][chote] else 0
        if player not in countdict : countdict[player] = 0
        countdict[player] += a[player][chote]

scoredict = {k: v for k, v in sorted(scoredict.items(), key=lambda item: item[1], reverse=True)}

sc = scoredict[p-1]
cdp = countdict[ p - 1]
o = list(scoredict.keys()).index(p-1) 
k = 0


print(sc, i + 1)
