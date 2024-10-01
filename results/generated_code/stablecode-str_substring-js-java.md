Below is the equivalent Java code for the provided JavaScript code:

```java
String str = "abcdefgh";
int n = 2;
int m = 3;

//  *  starting from n characters in and of m length;
String result1 = str.substring(n, n + m));  // 
=> "cde"

//  * starting from n characters in, up to the end of the string;
String result2 = str.substring(n);  // 
=> "cdefgh"
String result3 = str.substring(n, str.length() - 1));  // 
=> "abcdefg"

//  * starting from a known character within the string and of m length;
int index = str.indexOf("b", n);
String result4 = str.substring(index, index + m));  // 
=> "bcd"

//  * starting from a known substring within the string and of m length.
int index2 = str.indexOf("bc", n);
String result5 = str.substring(index2, index2 + m)); // 
=> "bcd"
```
This Java code performs the same operations as your JavaScript code. It takes a string and two integers (n, m) as input and returns either a substring of length m starting from n characters in the string or a substring of length m starting from a known character within the string or a substring of length m starting from a known substring within the string.
