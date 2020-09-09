n=input()
n=int(n)+1

flag=0
while(flag==0):
    n=str(n)

    if len(set(n))==4:
        print(n)
        flag=1
    n = int(n) + 1