from itertools import permutations

N = int(input())
lis = list(map(int,input().split(' ')))
op = list(map(int,input().split(' ')))
op_list =[]
for i in range(0,4):
    temp = [i+1] * op[i]
    op_list = op_list + temp
#print(op_list)
permut = list(permutations(op_list,N-1))
maxi = -1e9
mini = 1e9
ans_lis = []
for ops in permut:
    tot = lis[0]
    #print(ops)
    for i in range(1,N,1):
        if ops[i-1] == 1:
            tot += lis[i]
        elif ops[i-1] == 2:
            tot -= lis[i]
        elif ops[i-1] ==3:
            tot *= lis[i]
        elif ops[i-1] == 4:
            tot /= lis[i]
            tot = int(tot)
    if tot > maxi:
        maxi = tot
    if tot < mini:
        mini = tot
print(maxi)
print(mini)

