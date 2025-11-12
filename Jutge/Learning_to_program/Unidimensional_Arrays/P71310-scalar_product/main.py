from yogi import scan

n = scan(int)
while n is not None:
    u = [scan(float) for i in range(0, n)]
    v = [scan(float) for i in range(0, n)]
    print("{0:.4f}".format(scalar_product(u, v)))
    n = scan(int)
