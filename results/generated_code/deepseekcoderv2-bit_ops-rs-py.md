```
import math
def main():
    a: int = int('1101001',2)
    b: int = int('1011011',2)
    print(f'a      = {a:>8b}')
    print(f'b      = {b:>8b}')
    print(f'a | b  = {a|b:>8b}')
    print(f'a & b  = {a&b:>8b}')
    print(f'a ^ b  = {a^b:>8b}')
    print(f'!a     = {!a:>8b}')
    print(f'a << 3 = {math.leftshift(a,3):>8b}')
    print(f'a >> 3 = {a//2**3:>8b}')
```