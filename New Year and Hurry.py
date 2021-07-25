
# soln1

no,n=map(int,input().split(" "))
hr=240
# print(hr-n)
totalTm=hr-n
flag=1
increment=5
count=0
while(flag!=0):


    if totalTm>=0:
       totalTm-=increment
       # print(totalTm)
       increment+=5
       count+=1
    else:
        flag=0
if count-1>=no:
    print(no)
else:
    print(count-1)

# soln2

# num,n=map(int,input().split(" "))
# # hr=n/60
# # hr1=int(hr)
# # hr1+=20
# # min=int((hr%1)*60)
# min=0
# # hr1=int(hr1)
# # print(hr1,min)
# hr1=0
# increment=5
# count=0
# while(hr1!=24):
#     hr = n / 60
#     hr1 = int(hr)
#     hr1 += 20
#     min = int((hr % 1) * 60)
#     hr1 = int(hr1)
#     increment+=5
#     n+=increment
#     count+=1
# if count>num:
#     print(num)
# else:
#     print(count-1)
# print(hr1,min)

