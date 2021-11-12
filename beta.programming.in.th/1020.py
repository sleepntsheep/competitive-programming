str = input()
str = str.lower()
palin = 0

if len(str)% 2 == 1:
    str = str[:int(len(str) / 2)] + str[int(len(str) / 2) + 1:]

# print(str)
if str[::-1] == str:
    palin = 1 
    mid = int(len(str)/2) + (0 if len(str) % 2 == 0 else 1)
    fh = str[:mid]
    lh = str[mid:]

    if fh[::-1] == fh and lh[::-1] == lh:
        palin = 2

if not palin:
    print('No')
elif palin == 1:
    print('Palindrome')
else:
    print('Double Palindrome')
