def main():

    data = []

    n, m, s = [int(v) for v in str(input()).split()]

    for i in range(n):
        col = [int(v) for v in str(input()).split()]
        data.append(col)

    x, y = 0, 0

    result = 0

    for x in range(0, m):
        for y in range(0, n):
            height = data[y][x]
            see = True
            if y != 0:
                for j in range(y):
                    if data[j][x] + (j - y) * s >= height:
                        see = False
                        break
            result += see

    return result

if __name__ == '__main__':
    print(main())
