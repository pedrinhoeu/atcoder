pala = str(input())

pali = True
for i in range(0, len(pala)):
    if(pala[i] != pala[len(pala)-i-1]):
        pali = False
if pali:
    print("Yes")
else:
    print("No")