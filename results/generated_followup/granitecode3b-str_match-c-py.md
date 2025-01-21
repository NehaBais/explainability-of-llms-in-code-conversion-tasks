The error is that the `print` statement needs to be indented at least four spaces after the `if` statement on line 8. The fix is to simply add four spaces before the print statement.
This will correctly indent the print statement and resolve the syntax error.
Here's the corrected code in a single code block:
```py
def startsWith(container, target):
 return container.startswith(target)
 
def endsWith(container, target):
 return container.endswith(target)
 
def doesContain(container, target):
 if target in container:
  print("Location of match:", container.find(target))
  return True
 else:
  return False
container = "Hello,Hell"
target1 = "Hell"
print("Starts with Test (", container, ",", target1, ") :", startsWith(container, target1))
 
container = "Code"
target2 = "ode"
print("Ends with Test (", container, ",", target2, ") :", endsWith(container, target2))
 
container = "Google"
target3 = "msn"
print("Contains Test (", container, ",", target3, ") :", doesContain(container, target3))
```
The corrected code should now work as expected.