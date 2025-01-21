def substring(s, n, m):
    if m < 0:
        m = len(s) + m - n + 1
    if n < 0 or m < 0:
        return None
    for _ in range(n):
        if s[0] == '\0':
            return None
        s = s[1:]
    return s[:m]

def str_wholeless1(s):
    return substring(s, 0, len(s) - 1)

def str_fromch(s, ch, m):
    return substring(s, s.index(ch), m)

def str_fromstr(s, in, m):
    return substring(s, s.find(in), m)

# define TEST macro as Python doesn't have it
TEST = lambda A: print((A if A is not None else "--error--"))
    
s = "hello world shortest program"

# call the function with equivalent parameters
TEST( substring(s, 12, 5) )		# get "short"
TEST( substring(s, 6, -1) )		# get "world shortest program"
TEST( str_wholeless1(s) )		# "... progra"
TEST( str_fromch(s, 'w', 5) )		# "world"
TEST( str_fromstr(s, "ro", 3) )	# "rog"