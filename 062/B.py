a, b = [int(x) for x in input().split()]
resp = ""
resp += "#" * (b+2)
resp += "\n"

while a:
    resp += "#" + input() + "#" + "\n"
    a-=1
resp += "#" * (b+2)
print(resp)