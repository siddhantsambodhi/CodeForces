n=int(input())
lst1=list(map(int,input().split(" ")))
lst2=list(map(int,input().split(" ")))
if lst1[0]!=0 or lst2[0]!=0:
    lst3=lst1[1:]+lst2[1:]
    lst3=set(lst3)
    lst3=list(lst3)
    if lst3[0]==0:
        lst3.pop(lst3[0])

    if len(lst3)==n:
        print("I become the guy.")
    else:
        print("Oh, my keyboard!")
else:
    print("Oh, my keyboard!")
