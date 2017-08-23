#!/bin/python3

import sys


n = int(input().strip())
n = int(n)
for i in range(10):
    print("{} x {} = {}".format(n,(i+1),n*(i+1)))
