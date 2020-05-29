import sys
import heapq
 
def gcd(a, b):
    if a < b:
        a, b = b, a
    if b == 0:
        return a
    return gcd(b, a % b)
 
def main():
    a = int(input())
    for _ in range(a):
        h, c, t = map(int, sys.stdin.readline().split())
        if t >= h:
            print(1)
            continue
        if t <= (h + c) / 2:
            print(2)
            continue
        n = 0
        while (n * (c + h) + h) / (2 * n + 1) > t:
            temp = 0
            cnt = 1
            while ((n + 2 * cnt) * (c + h) + h) / (2 * (n + 2 * cnt) + 1) > t:
                cnt *= 2
                temp += 1
            n += cnt
        #print(n, abs((n * (c + h) + h) / (2 * n + 1) - t), abs(((n - 1) * (c + h) + h) / (2 * n - 1) - t))
        tempH = int(abs((n * (c + h) + h) - t * (2 * n + 1)))
        tempL = 2 * n + 1
        bigVal = (tempH // gcd(tempH, tempL)) / (tempL // gcd(tempH, tempL))
 
        tempH = int(abs(((n - 1) * (c + h) + h) - t * (2 * n - 1)))
        tempL = 2 * n - 1
        lowVal = (tempH // gcd(tempH, tempL)) / (tempL // gcd(tempH, tempL))
 
        if bigVal >= lowVal:
            print(2 * n - 1)
        else:
            print(2 * n + 1)
    return
 
if __name__ == "__main__":
    main()
