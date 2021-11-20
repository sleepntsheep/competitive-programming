a = ''

d = {
        'A': 0,
        'B': 0,
        'C': 0,
        'D': 0,
        'E': 0,
        'F': 0,
        'G': 0
        }

bld = {
        'A': 0,
        'B': 0,
        'C': 0,
        'D': 0,
        'E': 0,
        'F': 0,
        'G': 0
        }

zz = 0

while (a != '!'):
    a = input()
    min = 1000000000
    minindex = -1
    for ch in a:
        if ch in d: 
            d[ch] += 1

    eq = 0

    
    try:
        for i in range(7):
            if list(d.values())[i] < min: 
                min = list(d.values())[i]
                minindex = i
            elif list(d.values())[i] == min:
                eq = 1
    except:...

    if not eq:
        bld[list(d.keys())[minindex]] = 1
        zz += 1

for i in range(7):
    if bld[list(d.keys())[i]]:
        del d[list(d.keys())[i]]

nd = {k: v for k, v in sorted(d.items(), key = lambda item: item[1], reverse=True)}

#print(nd)
#print(bld)
print(zz)

for i in range(zz):
    if i == zz: break;
    if not bld[list(nd.keys())[i]]:
        print(list(nd.keys())[i], list(nd.values())[i])
    else:
        zz+=1
