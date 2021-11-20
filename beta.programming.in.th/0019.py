from itertools import combinations

n = int(input())

data = []

for i in range(n):
	data.append([int(v) for v in input().split()])

min = 10000000
for le in range(1, n+1):
	comb = combinations(data, le)
	for cc in list(comb):
		bitter = 0
		sour = 1
		for c in cc:
			#print(c)
			sour *= c[0]
			bitter += c[1]
		res = abs(sour - bitter)
		# print(res)
		if (res < min):
			min = res
	


print(min)