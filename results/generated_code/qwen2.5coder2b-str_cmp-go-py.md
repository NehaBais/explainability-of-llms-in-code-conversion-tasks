The equivalent code in Python would be:

```python
# python string comparison operators:
c = 'cat'
d = 'dog'

print(c == d) # this will print False because the strings are different
print(c != d) # this will print True

if c > d:
    print(c, "is lexically bytewise greater than", d)
elif c < d:
    print(c, "is lexically bytewise less than", d)

if c >= d:
    print(c, "is lexically bytewise greater than or equal to", d)
elif c <= d:
    print(c, "is lexically bytewise less than or equal to", d)

# Python also has a built-in method called lower() which can be used to convert string to lowercase.
# This method returns a new string in which all characters are in lowercase.
eqf = 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.'
print(eqf.lower()) # this will print the same as eqf

# Python does not have a built-in function for case insensitive equality comparison between strings.
# Instead, we can use the == operator which is used for this purpose.
if eqf == 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.':
    print(eqf, "equal to", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')
else:
    print(eqf, "not equal to", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')

# However, Python also has a built-in method called upper() which can be used to convert string to uppercase.
# This method returns a new string in which all characters are in uppercase.
print(eqf.upper()) # this will print the same as eqf

# Python does not have a built-in function for case insensitive inequality comparison between strings.
# Instead, we can use the != operator which is used for this purpose.
if eqf != 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.':
    print(eqf, "not equal to", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')
else:
    print(eqf, "equal to", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')

# We can also use the compare() method of the string class which compares two strings lexicographically.
# This method returns a negative integer if str1 is less than str2, 0 if they are equal,
# and a positive integer if str1 is greater than str2.
if eqf.compare('when interpreted as UTF-8 and compared under Unicode simple case folding rules.') < 0:
    print(eqf, "is lexically bytewise less than", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')
elif eqf.compare('when interpreted as UTF-8 and compared under Unicode simple case folding rules.') > 0:
    print(eqf, "is lexically bytewise greater than", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')

# Python does not have a built-in function for case insensitive inequality comparison between strings.
# Instead, we can use the != operator which is used for this purpose.
if eqf.compare('when interpreted as UTF-8 and compared under Unicode simple case folding rules.') != 0:
    print(eqf, "not equal to", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')
else:
    print(eqf, "equal to", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')

# We can also use the compare() method of the string class which compares two strings lexicographically.
# This method returns a negative integer if str1 is less than str2, 0 if they are equal,
# and a positive integer if str1 is greater than str2.
if eqf.compare('when interpreted as UTF-8 and compared under Unicode simple case folding rules.') <= 0:
    print(eqf, "is lexically bytewise less than or equal to", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')
elif eqf.compare('when interpreted as UTF-8 and compared under Unicode simple case folding rules.') >= 0:
    print(eqf, "is lexically bytewise greater than or equal to", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')

# Python does not have a built-in function for case insensitive inequality comparison between strings.
# Instead, we can use the != operator which is used for this purpose.
if eqf.compare('when interpreted as UTF-8 and compared under Unicode simple case folding rules.') >= 0:
    print(eqf, "is lexically bytewise greater than or equal to", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')
elif eqf.compare('when interpreted as UTF-8 and compared under Unicode simple case folding rules.') <= 0:
    print(eqf, "is lexically bytewise less than or equal to", 'when interpreted as UTF-8 and compared under Unicode simple case folding rules.')

```
In Python there are no built-in functions for case insensitive equality comparison between strings like in Go. However, we can use the `lower()` method to convert the string to lowercase before comparing it with another string.

The `compare()` method of the string class can be used to compare two strings lexicographically. It returns a negative integer if str1 is less than str2, 0 if they are equal, and a positive integer if str1 is greater than str2. This method is useful for comparing strings with different casing or special characters.
