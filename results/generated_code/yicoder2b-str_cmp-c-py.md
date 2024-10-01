Here is a Python equivalent of the given C code:

```python
def strcmp(s1, s2):
  if (len(s1) == len(s2)):
    return True if (s1==s2) else False
  else:
    return (1 if (len(s1)>len(s2)) else -1 )

def strcasecmp(s1, s2):
  if (len(s1) == len(s2)):
    return True if (s1.lower()==s2.lower()) else False
  else:
    return (1 if (len(s1)>len(s2)) else -1 )

def main():
  strings = ['ball', 'YUP', 'yep']
  for i in range(0, len(strings)-1):
    print(f"{strings[i]}{strcmp(strings[i], strings[i+1])}\t{strcasecmp(strings[i], strings[i+1])}")
 
if __name__ == "__main__":
  main()
```
In the Python code, we define a function `strcmp` to compare two strings. This function returns True if both strings are equal and False otherwise. In the `strcasecmp` function, we first check whether the lengths of the two input strings are equal. If they are not equal, it implies that one string is longer than the other and the function returns 1 if the length of s1 is greater than the length of s2, else -1.
The Python version compares each character of the strings in a case-insensitive manner.
In the main function, we call `strcmp` and `strcasecmp` for every pair of consecutive strings in our list.
