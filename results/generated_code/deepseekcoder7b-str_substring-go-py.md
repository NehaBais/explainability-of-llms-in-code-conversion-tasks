The Python code equivalent to the provided Golang code would look like this:

```python
def main():
    s = "ABCDEFGH"
    n = 2
    m = 3
    
    # for reference
    print("Index: ", [*range(len(s))])
    print("String:", s)
      
    # starting from n characters in and of m length 
    print(f"Start {n}, length {m}:    {s[n : n+m]}")
    
    # starting from n characters in, up to the end of the string
    print(f"Start {n}, to end:       {s[n:]}") 
  
    # whole string minus last character
    print("All but last:          ", s[:-1])
    
    # starting from a known character within the string and of m length
    dx = s.index('D')
    print(f"Start 'D', length {m}:   {s[dx : dx+m]}") 
    
    # starting from a known substring within the string and of m length
    sx = s.find("DE")
    print(f'Start "DE", length {m}: {s[sx : sx+m]}') 

if __name<｜begin▁of▁sentence｜>__<jupyter_e<｜end▁of▁sentence｜>:
    main()
```
This Python code does exactly the same thing as the Golang one, it is a direct translation. It uses some of Python's built-in string functions (`index` and `find`), similar to how you would use `strings.IndexByte` and `strings.Index` in Go. 

The main difference lies in syntax for printing formatted strings which includes f-string(formatted string literals) in python3.6+ . F-Strings are a way to embed expressions inside string literals, using {} brackets.

This code must be run in an environment where Python is installed (Python 3.6 or later).

