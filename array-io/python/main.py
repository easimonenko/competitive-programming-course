import sys

ONLINE_JUDGE = False

reader = open("input.txt", "r") if ONLINE_JUDGE else sys.stdin
writer = open("output.txt", "w") if ONLINE_JUDGE else sys.stdout

n = int(reader.readline())
a = map(int, reader.readline().split(' '))

print(n)
print(" ".join(map(str, sorted(a))), file=writer)
