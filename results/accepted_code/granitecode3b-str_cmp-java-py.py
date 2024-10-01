def compare(A, B):
 if A == B:
 print(f"'{A}' and '{B}' are lexically equal.")
 else:
 print(f"'{A}' and '{B}' are not lexically equal.")
 print()
 
 if A.lower() == B.lower():
 print(f"'{A}' and '{B}' are case-insensitive lexically equal.")
 else:
 print(f"'{A}' and '{B}' are not case-insensitive lexically equal.")
 print()
 
 if A < B:
 print(f"'{A}' is lexically before '{B}'.")
 elif A > B:
 print(f"'{A}' is lexically after '{B}'.")
 else:
 print(f"'{A}' is not lexically before or equal to '{B}'.")
 print()
 
 if A > B:
 print(f"'{A}' is not lexically after '{B}'.")
 elif A < B:
 print(f"'{A}' is not lexically before '{B}'.")
 else:
 print(f"'{A}' is not lexically before or equal to '{B}'.")
 print()
 
 print(f"The lexical relationship is: {A.compareTo(B)}")
 print(f"The case-insensitive lexical relationship is: {A.casefold().compareTo(B.casefold())}")
 
compare("Hello", "Hello")
compare("5", "5.0")
compare("java", "Java")
compare("ĴÃVÁ", "ĴÃVÁ")
compare("ĴÃVÁ", "ĵãvá")