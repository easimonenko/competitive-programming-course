import sys

ONLINE_JUDGE = True

reader = open("sum.in", "r") if ONLINE_JUDGE else sys.stdin
writer = open("sum.out", "w") if ONLINE_JUDGE else sys.stdout

a = int(reader.readline())
b = int(reader.readline())

print(str(a + b), file=writer)
