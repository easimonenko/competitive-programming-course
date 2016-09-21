import sys

ONLINE_JUDGE = True

reader = open("../tests/input.txt", "r") if ONLINE_JUDGE else sys.stdin
writer = open("../tests/output.txt", "w") if ONLINE_JUDGE else sys.stdout

for line in reader:
	writer.write(line)
