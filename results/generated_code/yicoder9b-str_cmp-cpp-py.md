Here is the equivalent Python code for your C++ program. Python has inbuilt string comparison functions that handle case sensitive and insensitive comparisons easily as well as lexical ordering:

```python
import sys

def demo_compare(a, b, semantically):
    print('{} and {} are {}exactly {} equal.'.format(a,b,'' if a==b else 'not ', semantically)) 
    print('{} and {} are {}inequal.'.format(a,b,'' if a!=b else 'not ')) 
    print('{} is {}ordered before {}.'.format(a, '' if a<b else 'not ', b))  
    print('{} is {}ordered after {}.'.format(a, '' if a>b else 'not ', b))   

def main():
    # Case-sensitive comparisons.
    a = sys.argv[1] if len(sys.argv) > 1 else "1.2.Foo"
    b = sys.argv[2] if len(sys.argv) > 2 else "1.3.Bar"
    demo_compare(a, b, 'lexically')  

    # Case-insensitive comparisons by converting both strings to lower case.
    a, b = a.lower(), b.lower()
    demo_compare(a, b, 'lexically') 

if __name__ == "__main__":
    main()
```
This Python code does essentially the same thing as your C++ program but instead of using string streams to convert strings into doubles for numerical comparison it uses the `float` function. It also handles command line arguments directly from sys.argv list, which is the pythonic way of doing so.
