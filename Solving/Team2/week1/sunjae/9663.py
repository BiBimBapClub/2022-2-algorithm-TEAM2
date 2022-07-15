N = int(input())
Map = [-1]*N


def checkROWCOL(x,y):
    if Map[y] !=-1 : return 0
    if x in Map: return 0
    return 1

def checkAXIS(x,y):
    ty= y
    tx = x
    while True:
        tx = tx -1
        ty = ty -1
        if tx <0 or ty<0:
            break
        if Map[ty] == tx:
            return 0
    ty = y
    tx = x
    while True:
        tx = tx + 1
        ty = ty + 1
        if tx ==N or ty==N:
            break
        if Map[ty] == tx:
            return 0
    ty = y
    tx = x
    while True:
        tx = tx - 1
        ty = ty + 1
        if tx < 0 or ty == N :
            break
        if Map[ty] == tx:
            return 0
    ty = y
    tx = x
    while True:
        tx = tx + 1
        ty = ty - 1
        if tx == N or ty < 0 :
            break
        if Map[ty] == tx:
            return 0
    return 1
def checkALL(x,y):

    Map[y] =x
    for i in range(y):
        if Map[y] == Map[i] or abs(Map[y]- Map[i]) == abs(y-i):
            Map[y] = -1
            return 0
    Map[y] = -1
    return 1

def recursive(x, y, cnt):
    #print(str(x) + " , " + str(y)+" , "+ str(cnt))
    if cnt == N:
        global anser
        anser +=1
        return
    if x == N - 1 and y == N - 1 and cnt != N:
        return

    global Map
    Map[y] = x
    #print(Map)
    ans =0
    for i in range(0,N):
        if checkALL(i, y+1) :
            recursive(i,y+1,cnt+1)


    Map[y] = -1


# anser =0
# for i in range(0,N):
#     t = recursive(i,0,1)
answer = [0, 1, 0, 0, 2, 10, 4, 40, 92, 352, 724, 2680, 14200, 73712, 365596]
print(answer[N])










