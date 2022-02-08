def bread():
    w, h, m, n = [int(v) for v in input().split()]
    # w = width of bread
    # h = height of bread
    # m = count of vertical cut
    # n = count of horizontal cut
    
    ms = [int(v) for v in input().split()]
    ns = [int(v) for v in input().split()]
    ms.append(w)
    ns.append(h)
    ms = [0, *ms]
    ns = [0, *ns]

    results = []

    amax1 = 0
    amax2 = 0

    for a in ms:
        a2 = ms[max(ms.index(a) - 1, 0)]
        if abs(a-a2) > amax1: amax1 = abs(a-a2)
        elif abs(a-a2) > amax2: amax2 = abs(a-a2)
        else: continue
        for b in ns:
            b2 = ns[max(ns.index(b) - 1, 0)]
            results.append(abs(a-a2) * abs(b-b2))

    max1 = max(results)
    results.remove(max1)
    max2 = max(results)

    return f'{max1} {max2}'

if __name__ == '__main__':
    exit(print(bread()));