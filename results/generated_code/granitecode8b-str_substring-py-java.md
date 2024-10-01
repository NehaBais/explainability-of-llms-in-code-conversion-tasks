Here is the converted code in Java:
```java
String s = "abcdefgh";
int n = 2;
int m = 3;
String char = "d";
String chars = "cd";
// starting from n=2 characters in and m=3 in length;
System.out.println(s.substring(n-1, n+m-1));
// starting from n characters in, up to the end of the string;
System.out.println(s.substring(n-1));
// whole string minus last character;
System.out.println(s.substring(0, s.length()-1));
// starting from a known character char="d" within the string and of m length;
int indx = s.indexOf(char);
System.out.println(s.substring(indx, indx+m));
// starting from a known substring chars="cd" within the string and of m length. 
indx = s.indexOf(chars);
System.out.println(s.substring(indx, indx+m));
```
In Java, the `String` class provides methods to extract substrings based on the specified range of characters. The `substring()` method takes two arguments: the starting index (inclusive) and the ending index (exclusive). The starting index is zero-based, meaning that the first character in the string has an index of 0.
The `indexOf()` method returns the index of the first occurrence of the specified substring in the given string. If the substring is not found, it returns -1.
Note that the Java program does not handle UTF-8 or UTF-16 encoding. It only works with ASCII characters.

