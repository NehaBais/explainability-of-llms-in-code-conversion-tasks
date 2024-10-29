In Java, there are no built-in methods to directly accomplish these functionalities as in JavaScript. However, one can achieve this by iterating over the characters of the string and using a StringBuilder for dynamic substring creation if needed. Here is the equivalent code for your requirements:
```java
String str = "abcdefgh";
int n = 2;
int m = 3;

// starting from n characters in and of m length;
System.out.println(str.substring(n, n+m)); // => "cde"

// starting from n characters in, up to the end of the string;
System.out.println(str.substring(n));  // => "cdefgh"

// whole string minus last character;
if (str.length() > 0) {
    System.out.println(str.substring(0, str.length()-1)); // => "abcdefg"
} else {
    System.out.println("");
}

// starting from a known character within the string and of m length;
System.out.println(str.substring(n, n+m));  // => "cde"

// starting from a known substring within the string and of m length.
int idx = str.indexOf("bc");  
if (idx != -1 && idx + m <= str.length()) {
    System.out.println(str.substring(idx, idx+m));  // => "bcd"
} else if (idx == -1) {
    System.out.println("The substring not found");  
} else {
    System<｜begin▁of▁sentence｜>.out.println("End of string reached");<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>    
}
```
These codes will give you the desired output in Java as per your requirements. Note that Java does not support UTF-8 and UTF-16 natively, therefore we are handling strings assuming they're standard Latin alphabet or ASCII characters. The code also assumes 'n', 'm' to be within string boundaries and "bc" substring existence for starting from a known substring within the string and of m length functionality in all cases where it is valid. If you need further unicode support, consider using libraries like Apache Commons Text or Java 8+'s built-in APIs supporting Unicode code points.

