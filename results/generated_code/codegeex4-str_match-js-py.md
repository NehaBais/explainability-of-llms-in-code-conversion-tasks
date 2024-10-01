Here is the Python equivalent of your JavaScript code:

```python
import re

def string_matching(string_a, string_b):
    # Checking if first string starts with second string
    q1 = string_a.startswith(string_b)
    
    # Checking if first string contains the second string at any location
    q2 = string_a.find(string_b)

    # Multiple matches
    pattern = re.compile(re.escape(string_b))
    q2_multi_matches = [match.start() for match in re.finditer(pattern, string_a)]

    # Checking if first string ends with the second string
    q3 = string_a.endswith(string_b)
    
    print("1: Does '{}' start with '{}'? {}".format(string_a, string_b, "Yes." if q1 else "No."))
    if q2 != -1:
        print("2: Is '{}' contained in '{}' ? Yes, at index {}.".format(string_b, string_a, q2))
        if len(q2_multi_matches) > 1:
            print("   In fact, it happens {} times within '{}', at index{} {}.".format(len(q2_multi_matches), 
                                                                                  string_a,
                                                                                  ("es" if len(q2_multi_matches)>1 else ""), 
                                                                                  ", ".join([str(i) for i in q2_multi_matches])))
    else:
        print("2: Is '{}' contained in '{}' ? No.".format(string_b, string_a))
    
    print("3: Does '{}' end with '{}'? {}".format(string_a, string_b, "Yes." if q3 else "No."))
        
string_matching("tacoloco", "co")
```

Note that Python uses different methods for some of these operations compared to JavaScript. For instance, it does not have a direct equivalent to JavaScript's `indexOf` method, so we use the `find` method instead. Similarly, Python uses the `re` module for regular expression operations, rather than JavaScript's native support for regular expressions.
