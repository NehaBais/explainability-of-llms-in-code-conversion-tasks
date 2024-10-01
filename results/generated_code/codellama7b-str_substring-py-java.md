 Here is the Java code that should accomplish the same tasks as the Python code you provided:
```java
String s = "abcdefgh";
int n = 2;
int m = 3;
char char = 'd';
String chars = "cd";
// starting from n=2 characters in and m=3 in length;
System.out.println(s.substring(n-1, n+m-1));
// starting from n characters in, up to the end of the string;
System.out.println(s.substring(n-1));
// whole string minus last character;
System.out.println(s.substring(0, s.length() - 1));
// starting from a known character char="d" within the string and of m length;
int indx = s.indexOf(char);
System.out.println(s.substring(indx, indx+m));
// starting from a known substring chars="cd" within the string and of m length. 
indx = s.indexOf(chars);
System.out.println(s.substring(indx, indx+m));
```
Note that in Java, strings are indexed starting from zero, so the first character is at index 0, the second at index 1, and so on. The `substring()` method takes two arguments: the start index (inclusive) and the end index (exclusive).

Also note that in Java, the `indexOf()` method returns the index of the first occurrence of a substring within a string, or -1 if the substring is not found. This means that if the substring is not found, the code will raise an exception. If you want to handle this case gracefully, you can use `indexOf()` in combination with `substring()` as follows:

int indx = s.indexOf(chars);
if (indx != -1) {
  System.out.println(s.substring(indx, indx+m));
} else {
  System.out.println("Substring not found");
}

