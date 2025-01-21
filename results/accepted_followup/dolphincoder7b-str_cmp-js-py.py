# Case sensitive comparison
print('abcd' == 'abcd')  # True
print('abcd' === 'abcd')  # True
print(123 == '123')   # True
print(123 === '123')   # False
print('ABCD' == 'abcd')   # False