n, u, v = [int(v) for v in input().split()]
edges = {}

for i in range(n - 1):
	a, b = [int(v) for v in input().split()]
	edges[a] = b

revedges = {}
for k, v in edges.items():
	revedges[v] = k

tokens = str(input())
tright = 0
tleft = 0

for c in tokens:
	if c == ')':
		tright += 1
	else: 
		tleft += 1

strres = ''
rightres = 0
leftres = 0

count = 0

for city1 in range(n):
	for city2 in range(n):
		revedget = revedges
		revedget[city2] = city1
		edget = edges
		edget[city1] = city2
		currentcity = u
		triggered = False
		while (currentcity != v):
			if tright > tleft: 
				triggered = True
				break
			try:
				des = edget[currentcity]
			except:
				des = revedget[currentcity]
			if tokens[des - 1] == ')':
				rightres += 1
			else:
				leftres += 1
			currentcity = des
		if triggered:
			continue
		count += 1

