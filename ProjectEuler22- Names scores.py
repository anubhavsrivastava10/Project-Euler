from string import ascii_uppercase

names = [input() for i in range(int(input()))]
names.sort()

for i in range(int(input())):
    name2 = input()
    mult = names.index(name2) + 1
    print (mult * sum (ascii_uppercase.index(i) + 1 for i in name2))

