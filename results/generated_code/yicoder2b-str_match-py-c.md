Below is the Python code that you asked for:

```python
def string_matching(s):
    if s in "abcd": print('abcd')
    elif 'ab' in s: print('contains ab')
    elif s.endswith('abc'): print('ends with abc')
    else: print('no match found')
```
This Python code contains the functions to perform the different operations that you asked for, and it uses python's built-in string methods and conditions to handle each operation. 

Below is how it works:
1. The function `string_matching(s)` checks if the input string (s) starts with 'abcd'. If it does, it prints 'abcd'. This is achieved using python's `in` operator with a string ('abcd') and checking if s starts with 'abcd'.
2. Similarly, it checks if the string contains 'ab' anywhere in the string, also using the same `in` operator. If it does, it prints 'contains ab'.
3. It then checks whether the string ends with 'abc'. If it does, it prints 'ends with abc'.
4. If none of these conditions are met, it prints 'no match found'.

For the optional requirements:
1. Python's built-in `find` method is used to get the index of the first occurrence of 'bb' in 'abab'. If 'bb' does not exist in this string, `find` returns -1. So, if you were to call `loc = "abab".find("bb")`, it will give you an error as there is no location after the first occurrence of 'b'.
2. To handle multiple occurrences of 'ab' we can use a loop and increment the start index by 1 in each iteration until 'ab' is not found or end. If 'ab' is found again, subtract one from start because you are backtracking to get the previous match.
3. Similar logic applies for finding location after first occurrence of 'ab' using `find` method and incrementing the start index if next 'ab' is found. Subtract 1 to indicate that you are backtracking. Use a while loop or repeat until no more matches are found.
