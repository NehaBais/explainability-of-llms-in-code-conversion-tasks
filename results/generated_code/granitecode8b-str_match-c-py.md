Here is the converted code from C to Python that demonstrates the three types of string matching as required:
```python
def startsWith(container, target):
 clen = len(container)
 tlen = len(target)
 if clen < tlen:
 return 0
 return container.startswith(target)
def endsWith(container, target):
 clen = len(container)
 tlen = len(target)
 if clen < tlen:
 return 0
 return container.endswith(target)
def doesContain(container, target):
 return target in container
container = "Hello"
target1 = "Hell"
target2 = "Code"
target3 = "msn"
print("Starts with Test (", container,",", target1, ") : ", startsWith(container, target1))
print("Ends with Test (", container,",", target2, ") : ", endsWith(container, target2))
print("Contains Test (", container,",", target3, ") : ", doesContain(container, target3))
```
The optional requirements are handled in the following ways:
1. Printing the location of the match for part 2 is not possible in Python as it requires indexing the string and iterating over each character. However, we can modify the `doesContain` function to print the location of the match by using the `find` method. Here's an updated version of the function:

def doesContain(container, target):
 index = container.find(target)
 if index != -1:
 print("Match found at position", index)
 return True
 else:
 return False

2. Handling multiple occurrences of a string for part 2 is possible in Python by using the `find` method to search for the first occurrence and then iterating over the remaining characters in the container string until we find another match. Here's an updated version of the function:

def doesContain(container, target):
 index = container.find(target)
 while index != -1:
 print("Match found at position", index)
 index = container.find(target, index + 1)
 if index == -1:
 return True
 else:
 return False

Note that the updated `doesContain` function returns `True` only if all occurrences of the target string have been printed.

