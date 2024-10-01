Here is the Python equivalent of your JavaScript code that meets all specified requirements:

```python
def stringMatching(s1, s2):
    q1 = s1.startswith(s2) 
    q2 = s1.find(s2)  
    q3 = s1.endswith(s2) 

    print("1: Does '{}' start with '{}'? {}".format(s1, s2, "Yes." if q1 else "No."))
    if ~q2:
        print("2: Is '{}' contained in '{}'? Yes, at index {}.".format(s2, s1, q2))
        # handle multiple occurrences of a string for part 2.
        indices = [i for i in range(len(s1)) if s1.startswith(s2, i)]
        if len(indices) > 1:
            print("   In fact, it happens {} times within '{}', at index{} {}"
                  .format(len(indices), s1, "es" if len(indices) > 1 else "", indices))
    else:
        print("2: Is '{}' contained in '{}'? No.".format(s2, s1))
    
    print("3: Does '{}' end with '{}'? {}".format(s1, s2, "Yes." if q3 else "No."))  

# test the function 
stringMatching("tacoloco", "co")
```
This Python code creates a function `stringMatching` that receives two strings as parameters (s1 and s2). The function uses built-in string methods to implement the three types of string matching: startswith() for part 1; find() for part 2; endswith() for part 3. It also includes multiple checks and formatting for console output.
