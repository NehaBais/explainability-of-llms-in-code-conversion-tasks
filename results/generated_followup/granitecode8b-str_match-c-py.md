The error in the code is that the `return` statement in the conditional block is not indented properly. The `if` statement and the subsequent `return` statements should be indented by at least four spaces to indicate that they are part of the same block of code.

Here's the corrected code:
```py
def doesContain(container, target):
 index = container.find(target)
 while index != -1:
 print("Match found at position", index)
 index = container.find(target, index + 1)
 if index == -1:
 return True
 else:
 return False
```
The corrected code ensures that the `return` statements are indented properly and are part of the same block of code as the `if` statement. This allows the function to correctly handle multiple occurrences of the target string in the container string.

