def main():
    n = int(input())

    count = 0
    for i in range(n):
        l, w =  [float(v) for v in str(input()).split()]

        if w <= 3*l/4:
            count += 1
    
    return count*5 + 3*(n-count)

if __name__ == '__main__':
    print(main())