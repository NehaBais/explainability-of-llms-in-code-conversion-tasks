The error is that the `while` statement needs to be indented at least four spaces after the `if` statement. The fix is to simply add four spaces to indent the `while` loop.
Here's the corrected code in a single line:
```py
s1 = "abcd"
s2 = "abab"
s3 = "ab"
# Beginning
print(s1.startswith(s3))
# End
print(s1.endswith(s3))
# Anywhere
print(s2.find(s3) != -1)
if s2.find(s3) != -1:
 print("Location of match:", s2.find(s3))
 loc = s2.find(s3)
 while s2.find(s3, loc + 1) != -1:
 print("Location of next match:", s2.find(s3, loc + 1))
 loc += 1
```
Explanation:
The error was due to the fact that the `while` statement needed to be indented at least four spaces after the `if` statement in order to be properly parsed by Python's syntax. The fix is simply to add four spaces to indent the `while` loop, which will make it properly formatted and execute as expected.

