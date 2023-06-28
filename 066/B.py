pala = input()
resp = len(pala)-1

while resp > 0:
    if(resp%2 == 0):
        achou = True
        te = resp//2
        for i in pala:
            if te >= resp:
                break
            if i != pala[te]:
                achou = False
                break
            te += 1
        if achou == True:
            break
    resp -= 1
print(resp)