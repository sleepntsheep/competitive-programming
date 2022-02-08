def main():

    x = int(input())

    if x ==2  :return 1

    count = 0

    pastlevel = int((2 * x) ** 0.5)
    pastlevellimit = int(pastlevel * (pastlevel + 1) / 2)

    while x not in range(pastlevel, pastlevellimit + 1):
        if x > pastlevellimit + pastlevel + 1: pastlevel += 1
        if x < pastlevellimit: pastlevel -= 1
        else: break
        pastlevellimit = int(pastlevel * (pastlevel + 1) / 2)


    return pastlevel


if __name__ == '__main__':
    print(main());