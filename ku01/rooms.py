def main():
    global data
    row, col = [int(v) for v in str(input()).split()]

    data = []

    for i in range(row):
        line = input()
        if 'A' in line:
            start = [line.index('A'), i]
        data.append(line)

    x, y = 0, 0
    print(data)

    return floodfill(start, 'all')


def floodfill(startpoint: list, direction):
    global data
    x, y = startpoint
    left = data[y][x-1]
    up = data[y-1][x]
    down = data[y+1][x]
    right = data[y][x+1]

    result = [startpoint]

    if direction == 'all':
        if left != '#':
            result.append(floodfill([x-1, y], 'left'))
        if up != '#':
            result.append(floodfill([x, y-1], 'up'))
        if down != '#':
            result.append(floodfill([x, y+1], 'down'))
        if right != '#':
            result.append(floodfill([x+1, y], 'right'))
    elif direction == 'left':
        if left != '#':
            result.append(floodfill([x-1, y], 'left'))
        if up != '#':
            result.append(floodfill([x, y-1], 'up'))
        if down != '#':
            result.append(floodfill([x, y+1], 'down'))
    elif direction == 'right':
        if up != '#':
            result.append(floodfill([x, y-1], 'up'))
        if down != '#':
            result.append(floodfill([x, y+1], 'down'))
        if right != '#':
            result.append(floodfill([x+1, y], 'right'))
    elif direction == 'up':
        if left != '#':
            result.append(floodfill([x-1, y], 'left'))
        if up != '#':
            result.append(floodfill([x, y-1], 'up'))
        if right != '#':
            result.append(floodfill([x+1, y], 'right'))
    elif direction == 'down':
        if left != '#':
            result.append(floodfill([x-1, y], 'left'))
        if down != '#':
            result.append(floodfill([x, y+1], 'down'))
        if right != '#':
            result.append(floodfill([x+1, y], 'right'))

    return result

'''
5 7
A*.#...
..#..*#
.*####.
# ..#..
.#.*#..
'''


if __name__ == '__main__':
    exit(print(main()))
