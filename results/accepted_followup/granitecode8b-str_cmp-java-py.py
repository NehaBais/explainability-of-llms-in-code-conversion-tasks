def compare_strings():
 A = "Hello"
 B = "Hello"
 if A == B:
 print("'{}' and '{}' are lexically equal.".format(A, B))
 else:
 print("'{}' and '{}' are not lexically equal.".format(A, B))
 print()
 
 if A.casefold() == B.casefold():
 print("'{}' and '{}' are case-insensitive lexically equal.".format(A, B))
 else:
 print("'{}' and '{}' are not case-insensitive lexically equal.".format(A, B))
 print()
 
 if A < B:
 print("'{}' is lexically before '{}'.".format(A, B))
 elif A > B:
 print("'{}' is lexically after '{}'.".format(A, B))
 else:
 print("'{}' and '{}' are not lexically different.".format(A, B))
 print()
 
 if A != B:
 print("'{}' and '{}' are not lexically equal.".format(A, B))
 else:
 print("'{}' and '{}' are lexically equal.".format(A, B))
 print()
 
 if A.isdigit() and B.isdigit():
 A = int(A)
 B = int(B)
 if A < B:
 print("Integer {} is less than integer {}".format(A, B))
 elif A > B:
 print("Integer {} is greater than integer {}".format(A, B))
 else:
 print("Integers {} and {} are equal".format(A, B))
 else:
 print("'{}' and '{}' are not both numeric strings.".format(A, B))