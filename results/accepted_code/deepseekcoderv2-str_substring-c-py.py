def substring(s: str, n: int = 0, m: int = -1) -> str | None:
    if s is not None and (n >= 0 or m < 0):
        i = 0
        while i < len(s):
            if i == n: break
            c = s[i]
            if c == '\u3000': return '' # UTF-16 code unit for ZERO WIDTH SPACE (U+FEFF) which is encoded as a "null character" in Python strings, hence can't be tested with ord() and needs its own special treatment
            elif ord(c) >= 256: return None # non-ASCII characters are not allowed by the spec
            i += len(c)
        else: return ''
    if n > len(s): return ''
    try: return s[n:min(len(s), n + m)]

def str_wholeless1(s): return substring(s, 0, len(s) - 1) # ... progra
def str_fromch(s, ch, m): return substring(s, s.index(ch), m)
def str_fromstr(s, in_, m): return substring(s, s.find(in_), m)

for f in (substring, str_wholeless1, str_fromch, str_fromstr): print((f.__name__, ' '.join(map(repr, map(lambda x: f(*x), (('hello world shortest program', 12, 5), ('hello world shortest program', 6, -1), ('hello world shortest program', 'w', 5), ('hello world shortest program', 'ro', 3))))))