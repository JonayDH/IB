from yogi import scan

s = scan(str)
while s is not None:
    print("1" if is_palindrome(s) else "0")
    n = len(s)
    if n > 100:
        sl = list(s)
        c = sl[0]
        sl[0] = 'a'
        st = "".join(sl)
        for i in range(0, 1000):
            print("1" if is_palindrome(st) else "0")
        sl[0] = c
        c = sl[1]
        sl[1] = 'a'
        st = "".join(sl)
        for i in range(0, 1000):
            print("1" if is_palindrome(st) else "0")
        sl[1] = c
        c = sl[3]
        sl[3] = 'a'
        st = "".join(sl)
        for i in range(0, 1000):
            print("1" if is_palindrome(st) else "0")
        sl[3] = c
        c = sl[n - 1]
        sl[n - 1] = 'a'
        st = "".join(sl)
        for i in range(0, 1000):
            print("1" if is_palindrome(st) else "0")
        sl[n - 1] = c
        c = sl[n - 2]
        sl[n - 2] = 'a'
        st = "".join(sl)
        for i in range(0, 1000):
            print("1" if is_palindrome(st) else "0")
        sl[n - 2] = c
        c = sl[n - 7]
        sl[n - 7] = 'a'
        st = "".join(sl)
        for i in range(0, 1000):
            print("1" if is_palindrome(st) else "0")
        sl[n - 7] = c
    s = scan(str)
