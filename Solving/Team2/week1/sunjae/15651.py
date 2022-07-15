from itertools import product

N,M = map(int, input().split(' '))
lis = range(1,N+1)
for row in product(lis,repeat = M):
    strs= str(row[0])
    for i in range(1,M):
        strs += ' '+str(row[i])
    print(strs)
