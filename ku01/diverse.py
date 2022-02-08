def main():
	W, L = [int(v) for v in input().split()]
	
	data = []
	seen = []

	for i in range(W):
		a = str(input()).split()
		for num in a: 
			if num not in seen: seen.append(num)
		data.append(a)

	if W < 5 or L < 5: return 0
	if len(seen) < 5: return 0

	x, y = 0, 0; 
	result = 0

	for x in range(0, L-4):
		for y in range(0, W-4):
			seen = []
			for i in range(0, 5):
				for j in range(0, 5):
					if data[y + i][x + j] not in seen: seen.append(data[y + i][x + j])
			y += 1
			if len(seen) >= 5: result += 1
		x += 1
		y = 0

	#print(data)
	return result


if __name__ == '__main__': 
	print(main());