from itertools import combinations

n, xx, yy = [int(v) for v in input().split()]

bat = []

for i in range(n):
	bat.append([int(v) for v in input().split()])

mintoxy = 100000000
for le in range(1, n+1):
	comb = combinations(bat, le)
	for cc in list(comb):
		x, y, time = 0, 0, 0
		cc = sorted(cc, key=lambda x: x[2], reverse=True)
		for c in cc:
			if (x > xx and y > yy):
				break;
			else: 
				x += c[0]
				y += c[1]
				time += c[2]
		if x < xx or y < yy:
			continue
		mintoxy = min(time, mintoxy)

if mintoxy == 100000000:
	print(-1)
	exit()

print(mintoxy)