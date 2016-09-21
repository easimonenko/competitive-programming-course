import sys

reader = open("../tests/input.txt", "r")
writer = open("../tests/output.txt", "w")

for line in reader:
	writer.write(line)
