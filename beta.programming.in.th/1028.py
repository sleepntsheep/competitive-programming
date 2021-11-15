var = [0 for i in range(26)]
i = ''
while i != '!':
    i = input()
    if i == '':
        continue
    if i[0] == '=':
        ins = i.split()
        if len(ins) < 3:
            var[ord(ins[1]) - 65] = 0
        try:
            var[ord(ins[1]) - 65] = int(ins[2])
        except:
            var[ord(ins[1]) - 65] = var[ord(ins[2]) - 65]
    elif i[0] == '#':
        print(var[ord(i[2]) - 65])
    elif i == '!':
        print('!')
    else:
        if i[0] == '+': var[ord(i[2]) - 65] += var[ord(i[4]) - 65]
        elif i[0] == '-': var[ord(i[2]) - 65] -= var[ord(i[4]) - 65]
        elif i[0] == '*': var[ord(i[2]) - 65] *= var[ord(i[4]) - 65]
        elif i[0] == '/': var[ord(i[2]) - 65] = var[ord(i[2]) - 65] // var[ord(i[4]) - 65] 
