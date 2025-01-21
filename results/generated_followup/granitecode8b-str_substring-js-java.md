The error message indicates that the implicitly declared classes feature is a preview feature that needs to be enabled using the `--enable-preview` flag. This feature allows for the declaration of classes without explicitly specifying their type, which can make the code more concise and readable. To fix this error, you need to enable the implicitly declared classes feature by adding the `--enable-preview` flag when compiling the code. Once this is done, you should be able to compile the code without any errors.
Here's the corrected code:
```java
// Enable implicitly declared classes feature
--enable-preview
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
Note that the `--enable-preview` flag should be added when compiling the code, not when running it. Also, make sure to use the correct syntax for enabling the implicitly declared classes feature based on the Java version you are using.

