no=int(input())
for i in range(no):
    n=int(input())

    if n%2==0:
        n-=1
    if n==2:
        n=1
    num=n/2
    print(int(num))