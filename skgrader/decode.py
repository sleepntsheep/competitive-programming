def main():
	m, n, x, y = [int(v) for v in input().split()]
	point = [x, y]
	for a in range(1, max(m, n)):
		if x - a >= 1 and y + a <= n: point.append([x - a, y + a])
		if x - a >= 1 and y - a >= 1: point.append([x - a, y - a])
		if x + a <= m and y + a <= n: point.append([x + a, y + a])
		if x + a <= m and y - a >= 1: point.append([x + a, y - a])
	print( point )
	print('#' * (m + 2))
	for line in range(1, n + 1):
		print('#', end='')
		for c in range(1, m + 1):
			print('*' if [c, line] in point or [c, line] == [x, y] else ' ', end='')
		print('#')
	print('#' * (m + 2))

if __name__ == '__main__':
	print(main())