c = "cat"
d = "dog"
if c == d:
    print(c, "is bytewise identical to", d)
if c != d:
    print(c, "is bytewise different from", d)
if c > d:
    print(c, "is lexically bytewise greater than", d)
if c < d:
    print(c, "is lexically bytewise less than", d)
if c >= d:
    print(c, "is lexically bytewise greater than or equal to", d)
if c <= d:
    print(c, "is lexically bytewise less than or equal to", d)
import strings

eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules."
if strings.EqualFold(c, d):
    print(c, "equal to", d, eqf)
else:
    print(c, "not equal to", d, eqf)
