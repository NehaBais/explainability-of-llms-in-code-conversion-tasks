Here is the Python code that demonstrates the three types of string matching as specified in the requirement:
```
import re
def match(first, second):
 print("1. {} starts with {}: {}".format(first, second, first.startswith(second)))
 i = re.search(second, first)
 if i is not None:
 i = i.start()
 print("2. {} contains {}: True".format(first, second))
 print("2.1. at location {}".format(i))
 for m in re.finditer(second, first):
 i = m.start()
 print("2.2. at location {}".format(i))
 if i == len(first) - len(second):
 break
 else:
 print("2.2. and that's all")
 print("3. {} ends with {}: {}".format(first, second, first.endswith(second)))
```
Note that the `re.finditer()` function is used to find all occurrences of the second string in the first string, rather than just the first occurrence as in Golang. Also, I added a condition to print "2.2. and that's all" only if the last match occurred at the end of the first string.

