from yogi import read, tokens

for n in tokens(int):
    v = []
    for i in range(0, n):
        v.append(read(int))
    a = sorted(set(v))
    m = len(a)
    print("1" if exists(1234, v) else "0")
    print("1" if exists(-1000000, v) else "0")
    if n < 100:
        for x in a:
            print("1" if exists(x, v) else "0")
        for i in range(1, m):
            print("1" if exists((a[i] + a[i - 1]) // 2, v) else "0")
    else:
        for y in range(0, 1000):
            for x in a:
                print("1" if exists(x, v) else "0")
