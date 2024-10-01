Here is the Java code that corresponds to the JavaScript code provided:
```java
String str = "abcdefgh";
int n = 2;
int m = 3;
// * starting from n characters in and of m length;
String substr1 = str.substring(n, n + m); // => "cde"
// * starting from n characters in, up to the end of the string;
String substring2 = str.substring(n); // => "cdefgh"
// * whole string minus last character;
String substring3 = str.substring(0, str.length() - 1); // => "abcdefg"
// * starting from a known character within the string and of m length;
int index4 = str.indexOf('b');
String substr4 = str.substring(index4, index4 + m); // => "bcd"
// * starting from a known substring within the string and of m length. 
String substr5 = str.substring(str.indexOf("bc"), str.indexOf("bc") + m); // => "bcd"
```
Note that the Java `String` class uses UTF-16 encoding by default, so it can handle all Unicode characters in the Basic Multilingual Plane and above. However, if you need to support other encodings, you may need to use a different data type or library.

