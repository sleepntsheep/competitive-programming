data = []
maxX, maxY = 0, 0
while True:
    line = input().split(' -> ')
    if line == ['x']:
        break
    start = [int(v) for v in line[0].split(',')]
    end = [int(v) for v in line[1].split(',')]
    if start[0] > maxX:
        maxX = start[0]
    if start[1] > maxX:
        maxX = start[1]
    if end[0] > maxY:
        maxY = end[0]
    if end[1] > maxY:
        maxY = end[1]
    data.append([start, end])

grid = [[0 for _ in range(maxX+1)] for __ in range(maxY+1)]

for line in data:
    start = line[0]
    end = line[1]

    if start[0] == end[0]:
        startY = min(start[1], end[1])
        distance = abs(start[1] - end[1])
        for co in range(0, distance+1):
            grid[startY+co][start[0]] += 1

    elif start[1] == end[1]:
        startX = min(start[0], end[0])
        distance = abs(start[0] - end[0])
        for co in range(0, distance+1):
            grid[start[1]][startX+co] += 1

    else:
        startX = min(start[0], end[0])
        startY = min(start[1], end[1])
        distance = abs(start[0] - end[0])
        for i in range(0, distance+1):
            grid[startY+i][startX+i] += 1

count = 0
for y in grid:
    for x in y:
        if x >= 2:
            count += 1

print(count)
