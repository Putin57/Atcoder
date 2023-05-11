import sys
sys.stdin.reconfigure(line_buffering=True)
s=input()
s1=""
for i in range(len(s)+1):
    if i==len(s):
        break
    elif i%2==1:
        s1+=s[i]
        s1+=s[i-1]
print(s1)
