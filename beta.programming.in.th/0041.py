n = int(input())

if n == 1:
    print('2.000000')
    exit()

if n % 2 == 1: n += 0.464102

print(f'{n:.6f}')
