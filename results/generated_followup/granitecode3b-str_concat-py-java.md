The error is that the `+` operator can only be used with classes, interfaces, enums, or records in Java 17 onwards. However, the first two lines of code are concatenating strings using the `+` operator and printing the result using `System.out.println()`, which are not supported in Java 17.
The fix is to upgrade to Java 17 or later, as the `+` operator is a preview feature introduced in Java 17 that is disabled by default.
Here's the corrected code:
```java
String s1 = "hello";
System.out.println(s1 + " world");

String s2 = s1 + " world";
System.out.println(s2);

String[] arr = {"hello", "world", "mom"};
String s3 = String.join(", ", arr);
System.out.println(s3);
``` 
In this corrected code, the first two lines of code concatenate strings using the `+` operator and print the result using `System.out.println()`, which are supported in Java 17 onwards. The last two lines of code create an array of strings `arr`, concatenate the elements of the array into a single string with ", " as the separator, and print the resulting string using `System.out.println()`.

