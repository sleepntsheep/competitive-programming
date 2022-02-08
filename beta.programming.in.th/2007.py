# a, b = [int(v) for v in input().split()]
import time
input()

q = input()
w = input()
qle = len(q)
# qlp = [v for v in q]
# wl = []

def main():
    global q, w, qle
    c = 0

    for i in range(len(w) - len(q) + 1):
        # print(f'Total Global qlp: {qlp}')
        ql = q
        s = w[i:i+qle]
        # print(f'\n\nNew Test case : {s}')
        for ch in s:
            if ch not in ql:
                # subequal = 0
                # print(f'Not in : terminate; QL: {ql}')
                break;
            else:
                # print(f'Remove: {ch} ; QL: {ql}')
                ql = ql[:ql.index(ch)] + ql[ql.index(ch)+1:]
        # print(q)
        if ql == '':
            # print(f'found: {ql}')
            # print(s)
            c += 1

    print(c)

if __name__ == '__main__':
    start = time.time()
    a = [main() for _ in range(int(input()))]

    end = time.time()
    print(f'{end-start:.3f}')