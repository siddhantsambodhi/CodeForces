
n=input()
num=list(n)
count=0
flag=0
for i in range(len(num)):
    if num[i]=='4' or num[i]=='7':
        count+=1
if count==4 or count==7:
    print("YES")
else:
    print("NO")