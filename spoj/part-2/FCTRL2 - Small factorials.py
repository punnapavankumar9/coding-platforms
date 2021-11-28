facts = [1] * 101
prev = 1
for i in range(1,101):
    facts[i] = prev * i
    prev = facts[i]

n = int(input())
for i in range(n):
    x = int(input())
    print(facts[x], end = "\n")