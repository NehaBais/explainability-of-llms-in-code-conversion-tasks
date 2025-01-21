The error is due to an invalid character (U+FF5C, which is '|') in the original Python code. This problem can be solved by removing all occurrences of this special character from the source code. 

Here's the corrected version of the provided python script:
```py
def main():
    s = "ABCDEFGH"
    n = 2
    m = 3
    
    # for reference
    print("Index: ", [*range(len(s))])
    print("String:", s)
      
    # starting from n characters in and of m length 
    print(f"Start {n}, length {m}:   {s[n : n+m]}")
    
    # starting from n characters in, up to the end of the string
    print(f"Start {n}, to end:      {s[n:]}") 
  
    # whole string minus last character
    print("All but last:         ", s[:-1])
    
    # starting from a known character within the string and of m length
    dx = s.index('D')
    print(f"Start 'D', length {m}:  {s[dx : dx+m]}") 
    
    # starting from a known substring within the string and of m length
    sx = s.find("DE")
    print(f'Start "DE", length {m}: {s[sx : sx+m]}') 

if __name__ == "__main__":
    main()
```

