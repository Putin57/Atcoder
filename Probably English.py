import sys
sys.stdin.reconfigure(line_buffering=True)
n=int(input())
s=[str(i) for i in input().split()][:n]
for i in s:
    if i in ["and","not","that","the","you"]:
        print("Yes")
        break
else:print("No")
