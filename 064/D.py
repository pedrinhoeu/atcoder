n = int(input())
pala = str(input())

ab = 0
fe = 0

abs = 0

for i in pala:
    if(i == "("):
        abs += 1
    if(i == ")"):
        abs -= 1
    if(abs < 0):
        fe += 1
        abs += 1
    
ab = abs

print("(" * max(fe, 0), end="")
print(pala, end="")
print(")" * max(ab, 0), end="")