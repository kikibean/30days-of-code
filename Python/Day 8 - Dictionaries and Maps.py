n=int(input())
dicts={}


for i in range(n):
    key,value=input().split()
    dicts[key]=value
    
while True:
    try:
        keys=input()
        if keys in dicts.keys():
            print(keys+'='+dicts[keys])
        else:
            print("Not found")
    except:
        break
