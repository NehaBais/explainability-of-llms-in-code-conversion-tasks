# case sensitive comparison
print('abcd' == 'abcd') # True
print('abcd' === 'abcd') # True
print(123 == '123')  # True
print(123 === '123')  # False
print('ABCD' == 'abcd')  # False

# case insensitive comparison
print('abcd'.lower() == 'ABCD'.lower())  # True

# lexicographic order comparison
print('abcd' < 'dcba')  # True
print('abcd' > 'dcba')  # False