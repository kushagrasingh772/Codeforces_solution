from copy import deepcopy
for _ in range (int(input())):
    s=list(input())
    p=list(input())
    for i in p:
        s.remove(i)
    s.sort()
    re=deepcopy(s)
    re.append(p[0])
    re=sorted(re,reverse=True)
    if p[0] not in s:
        print(''.join(s[0:len(re)-re.index(p[0])-1])+''.join(p)+''.join(s[len(re)-re.index(p[0])-1:]))
    else:
        air=''.join(s[0:s.index(p[0])])+''.join(p)+''.join(s[s.index(p[0]):])
        print(min(air,''.join(s[0:len(re)-re.index(p[0])-1])+''.join(p)+''.join(s[len(re)-re.index(p[0])-1:])))
