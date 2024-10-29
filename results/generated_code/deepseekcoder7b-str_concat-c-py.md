Here is the equivalent Python code for your C program. It follows a similar logic with string concatenation and printing as well.

Python has dynamic typing which means that we don't need to declare type of variable while creating it, unlike in statically typed languages like C or Java etc. So there are no malloc/free calls needed in Python. Also, strings in Python can be concatenated using '+', just like in JavaScript etc.

```python
s = "hello"
print(s + " literal")
# or 
print(s, "literal")

s2 = s + " literal"
print(s2)
```

In C, a function is used to concatenate two strings while in Python we use '+' operator. In both cases memory for the new string is automatically managed by python so there are no free calls needed. Note that if the size of your strings could be very large, it may still be necessary to manually free those allocated blocks of memory in C using free(s2).

