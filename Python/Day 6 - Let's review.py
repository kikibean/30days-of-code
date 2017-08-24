N=int(input())
for i in range(N):
    str=input()
    str1=[]
    str2=[]
    for j in range(len(str)):
        if j%2==0:
            str1.append(str[j])
    for j in range(len(str)):
        if j%2!=0:
            str2.append(str[j])   
    print(''.join(str1)+' '+ ''.join(str2))
