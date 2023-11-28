d = input()
g = input()

if d == g:
    print(-1)

def sub(str, ini, fim):
    return str[ini:fim + 1]

tam = len(d)
achei = True
for i in range(tam):
    for j in range(tam - i):
        ssub = sub(d, j, j + i)
        if (g.find(ssub) == -1):
            print(i+1)
            achei = False
            break
    if not achei:
        break

if achei:
    print(-1)
