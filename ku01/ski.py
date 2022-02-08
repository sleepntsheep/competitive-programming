l, m, n = [int(v) for v in str(input()).split()]

for line in range(n):
    result = 1;
    x, y = 0, 0;
    instructions = str(input()).split()
    for instruction in instructions:
        if instruction == '1': x += 1
        else: x -= 1
        y += 1
        if abs(x) > l or y > m: result = 0
    print(result)