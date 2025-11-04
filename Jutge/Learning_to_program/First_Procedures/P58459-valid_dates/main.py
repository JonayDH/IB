from yogi import *


for d in tokens(int):
    m = read(int)
    a = read(int)
    print("true" if is_valid_date(d, m, a) else "false")
