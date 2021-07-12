
r,n=map(int,input().split(" "))

innerFlag=2
flag=0
lst=[]
for i in range(r):
    if flag==0:
        st2=''
        for j in range(n):
            # print("#",end="")
            st2+='#'
        # print('\r')
        lst.append(st2)
        st2=''

        flag=1
    else:
        st=''
        if innerFlag%2!=0:
            # print('#', end="")
            st+='#'

        for j in range(n-1):
            # print(".",end="")
            st+='.'
        if innerFlag%2==0:
            # print("#")
            st+='#'

        # print(st)
        lst.append(st)

        st=''
        innerFlag+=1
        flag=0


print(*lst,sep='\n')