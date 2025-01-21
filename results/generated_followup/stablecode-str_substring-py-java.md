The error is caused by the use of `--enable-preview` which enables implicitly declared classes as a preview feature, but it is disabled by default.

Fix: The easiest way to fix this error is to remove all references to implicitly declared classes in your Java code. This can typically be done by removing lines that reference variables or methods with default modifiers like `private`, `protected` and `public`.

Corrected code block:
```java
String s = "abcdefgh";
int n = 2, m = 3;
char charToFind = 'd';
String substringToFind = "cd";

System.out.println(s.substring(n-1, n+m-1))));
System.out.println(s.substring(n-1)));
System.out.println(s.substring(0, s.length() - 1))));

int indexOfChar = s.indexOf(charToFind);
System.out.println(s.substring(indexOfChar, m))));

int indexOfSubstring = s.indexOf(chars);
System.out.println(s.substring(indexOfSubstring, m))));
```
