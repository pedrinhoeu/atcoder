x = int(input())

resp = 1
vzs = 0

for i in range(1, x+1):
    at = 0
    k = i
    while k % 2 == 0:
        k = k//2
        at += 1
    if at > vzs:
        resp = i
        vzs = at
print(resp)