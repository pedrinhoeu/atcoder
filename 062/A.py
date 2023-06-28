a, b = [int(x) for x in input().split()]

if a in [1, 3, 5, 7, 8, 10, 12]:
    ar = 1
if b in [1, 3, 5, 7, 8, 10, 12]:
    br = 1
if a in [4, 6, 9, 11]:
    ar = 2
if b in [4, 6, 9, 11]:
    br = 2
if a in [2]:
    ar = 3
if b in [2]:
    br = 3
if ar == br:
    print("Yes")
else:
    print("No")