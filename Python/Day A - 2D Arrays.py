#!/bin/python

import sys

arr = []

for _ in range(6):
    tmp = [int(x) for x in str(input()).split(" ")]
    arr.append(tmp)
    
sumss=-1000
for i in range(4):
    for j in range(4):
        sums=sum(arr[i][j:(j+3)])+arr[i+1][j+1]+sum(arr[i+2][j:(j+3)])
        if sums>=sumss:
            sumss=sums
        else:
            sumss=sumss
print(sumss)           
        
