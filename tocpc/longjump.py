n, m, w = [int(v) for v in input().split()]
sx, sy = [int(v) for v in input().split()]
ex, ey = [int(v) for v in input().split()]

matrix = [
	[0 for i in range(m+2)] for j in range(n+2)
]

for i in range(n+2):
	matrix[0][i-1] = 1
	matrix[m+1][i-1] = 1

for i in range(m+2):
	matrix[i][0] = 1
	matrix[i][n+1] = 1

for i in range(w):
	tx, ty = [int(v) for v in input().split()]
	matrix[tx][ty] = 1

def neighbor(x, y):
	global matrix
	count = (0, 0, 0, 0)
	count[0] += matrix[x-1][y]
	count[1] += matrix[x+1][y]
	count[2] += matrix[x][y-1]
	count[3] += matrix[x][y+1]
	return count

if not any(neighbor(sx, sy)):
	print(-1)
	exit(0)

count = 0
while (sx == ex and sy == ey):
	nei = neighbor(sx, sy)
	if nei[0] 