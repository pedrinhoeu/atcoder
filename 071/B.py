pala = str(input())

lis = [0] * 26

for i in pala:
    lis[ord(i) - 97] += 1
achou = False
for i in range(0, 26):
    if(lis[i] == 0):
        print(chr(i+97))
        achou = True
        break
if(not achou):
    print("None")