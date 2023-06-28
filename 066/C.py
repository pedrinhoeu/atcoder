n = int(input())
lis = [int(x) for x in input().split()]

resp = []
rerv = []
resp.append(lis[0])

lis.pop(0)

inv = 0

for i in lis:
    if inv == 1:
        rerv.append(i)
        inv = 0
    else:
        resp.append(i)
        inv = 1

if inv == 0:
    for i in range(len(rerv)-1, -1, -1):
        print(rerv[i], end=" ")
    for i in resp:
        print(i, end=" ")
    print()
else:
    for i in range(len(resp)-1, -1, -1):
        print(resp[i], end=" ")
    for i in rerv:
        print(i, end=" ")
    print()