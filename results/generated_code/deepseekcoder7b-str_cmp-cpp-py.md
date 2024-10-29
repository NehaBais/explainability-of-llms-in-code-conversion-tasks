The Python code for the given C++ program would be as follows. As you can see, it's easier to achieve string comparisons in python than in C++ due to its dynamic typing and built-in functions. The syntax is also simpler and more intuitive:

```python
def demo_compare(a, b, semantically):  
    print(f"{a} and {b} are {'exactly' if a==b else 'not exactly'} {semantically} equal.")
    
    print(f"{a} and {b} are {'inequal.' if a!=b else 'not inequal.'}")
      
    print(f"{a} is {'ordered before' if a<b else "not ordered before"} {b}.")
       
    print(f"{a} is {'ordered after' if a>b else 'not ordered after'} {b}.") 
  
def main(): 
    # Case-sensitive comparisons.
    a = "1.2.Foo"
    b = "1.3.Bar"
    
    demo_compare(a, b, "lexically") 
      
    # Case-insensitive comparisons by using lower() function in python.
    a = a.lower()
    b = b.lower()
     
    demo_compare(a, b, "lexically")  
    
    # Numeric comparisons; here the 'float' could be any type for which the relevant 
    # function is defined, eg int(), long(), etc. 
    try: 
        numA = float(a)
        numB = float(b)
        
        demo_compare(numA, numB, "numerically")  
    except ValueError:
        print("Can't perform numeric comparisons for non-numeric strings.")
    
if __name__ == '__main__': 
    main()
```
This Python code will execute exactly the same way as your C++ code. It compares two strings in different ways (exact equality, inequality, lexical comparison) and also does numeric comparisons if possible. We have used `try/except` to handle cases where we can't perform a numeric comparison on non-numeric strings.

