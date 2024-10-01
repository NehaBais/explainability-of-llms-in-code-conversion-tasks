This is the equivalent code in Python:

```python
def string_manipulation(s):
    n, m = 2, 3 # for reference
    print("Index:", "01234567")
    print("String:", s)
    # starting from n characters in and of m length
    print('Start {}, length {}:    {}'.format(n, m, s[n:n+m]))
    # starting from n characters in, up to the end of the string
    print('Start {}, to end:      {}'.format(n, s[n:]))
    # whole string minus last character
    print('All but last:         {}'.format(s[:-1]))
    # starting from a known character within the string and of m length
    dx = s.find('D')
    print('Start "D", length {}    {}'.format(m, s[dx:dx+m]))
    # starting from a known substring within the string and of m length
    sx = s.index('DE')
    print('Start "DE", length {}:  {}'.format(m, s[sx:sx+m]))

string_manipulation('ABCDEFGH')
```
