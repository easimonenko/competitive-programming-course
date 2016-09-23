import sys

ONLINE_JUDGE = False

reader = open("sum.in", "r") if ONLINE_JUDGE else sys.stdin
writer = open("sum.out", "w") if ONLINE_JUDGE else sys.stdout

inp = reader.readline().split(' ')
a = int(inp[0])
b = int(inp[1])

print(a + b, file=writer)
