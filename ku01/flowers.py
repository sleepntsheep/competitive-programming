def plant():
	# l = thicness of a lane
	# n = count of flowers
	l, n = [int(v) for v in input().split()]

	suma = l * (l+1) /2
	lane = 0

	while n > 0:
		n -= l**2 * (lane) + suma
		lane += 1

	return lane

if __name__ == '__main__':
	exit(print(plant()))