def main():
    n = int(input())

    dat = []
    for i in range(n):
        dat.append(int(input()))

    dat.sort()

    result = 0;
    added = 0
    for num in dat:
        added += num
        result += 2* added

    return result


if __name__ == '__main__':
    print(main())