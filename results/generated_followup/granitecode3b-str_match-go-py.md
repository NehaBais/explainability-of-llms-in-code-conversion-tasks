The error is that the `if` statement is not indented properly within the function definition. To fix this, simply add four spaces to the beginning of the line containing the `if` statement. Here's the corrected code in a single code block:
```
def match(first, second):
 print("1. {} starts with {}: {}".format(
 first, second, first.startswith(second)))
 i = first.find(second)
 print("2. {} contains {}: {},".format(
 first, second, i >= 0))
 if i >= 0:
 print("2.1. at location {}.".format(i))
 start = i + 1
 while True:
 i = first.find(second, start)
 if i < 0:
 break
 print("2.2. at location {}.".format(start+i))
 start += i + 1
 print("2.2. and that's all.")
 print("3. {} ends with {}: {}".format(
 first, second, first.endswith(second)))
match("abracadabra", "abr")
```

