Here's the Python code that matches the requirements:
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
The `startswith` method checks if the first string starts with the second string, and returns a boolean value indicating whether the first string starts with the second string or not.
The `find` method searches for the specified substring in the first string and returns its starting index if it is found, or -1 if it is not found.
The `endswith` method checks if the first string ends with the second string, and returns a boolean value indicating whether the first string ends with the second string or not.

