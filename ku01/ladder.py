def main():
    m, n = [int(v) for v in input().split()]
    boarddata = [int(v) for v in input().split()]
    diceroll = [int(v) for v in input().split()]

    pos = 0;
    for roll in diceroll:
        pos += roll
        if pos > len(boarddata): pos = len(boarddata)
        pos += boarddata[pos - 1]
        if pos > len(boarddata): pos = len(boarddata)
        # if pos < 1: pos = 1

    return max(pos, 0)

if __name__ == '__main__':
    exit(print(main()));