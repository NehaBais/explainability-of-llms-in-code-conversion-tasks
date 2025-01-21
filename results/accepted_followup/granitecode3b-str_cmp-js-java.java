// Demonstrate how to compare two strings from within the language and how to achieve a lexical comparison.
// Compare two strings for exact equality
boolean isEqual = "abcd".equals(new String("abcd")); // true
System.out.println(isEqual);
// Compare two strings for inequality (i.e., the inverse of exact equality)
boolean isNotEqual = "abcd".equals(new String("123")); // false
System.out.println(isNotEqual);
// Compare two strings to see if one is lexically ordered before than the other
boolean isBefore = "abcd".compareTo("dcba") < 0; // true
System.out.println(isBefore);
// Compare two strings to see if one is lexically ordered after than the other
boolean isAfter = "dcba".compareTo("abcd") > 0; // false
System.out.println(isAfter);
// Case insensitive comparison of strings
boolean isCaseInsensitiveEqual = "ABCD".toLowerCase().equals("abcd"); // true
System.out.println(isCaseInsensitiveEqual);
// Compare two numeric strings if they are not treated lexically
double num1 = 123.45;
String str1 = "123.45";
boolean isNumericallyEqual = num1 == Double.parseDouble(str1); // true
System.out.println(isNumericallyEqual);