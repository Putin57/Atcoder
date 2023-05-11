n=int(input())
li=list(map(int,input().split(
    )))[:n]
li1=[]
for i in li:
    if i%2==0:
        li1.append(i)
print(*li1)