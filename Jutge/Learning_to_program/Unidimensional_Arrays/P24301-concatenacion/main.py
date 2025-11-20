from yogi import *

for n1 in tokens(int):
    v1 = [read(int) for i in range(n1)]
    n2 = read(int)
    v2 = [read(int) for i in range(n2)]
    res = concatenation(v1, v2)
    print(len(res))
    print("", *res)
