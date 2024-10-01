Sure! Here's the Java code that performs the same functionality as the C code:
```java
package com.example;
 
public class StringComparisonDemo {
 public static void main(String[] args) {
 String a = "ball";
 String b = "bell";
 
 System.out.println("	eq , ne , gt , lt , ge , le");
 System.out.printf("%s%2d%2d%2d%2d%2d%2d %s", 
 a, STREQ(a,b), STRNE(a,b), STRGT(a,b), STRLT(a,b), STRGE(a,b), STRLE(a,b), b);
 
 System.out.println();
 a = "BALL";
 b = "bell";
 
 System.out.printf("%s%2d%2d%2d%2d%2d%2d %s ignoring case", 
 a, STREQ(a,b), STRNE(a,b), STRGT(a,b), STRLT(a,b), STRGE(a,b), STRLE(a,b), b);
 }
 
 static boolean STREQ(String a, String b) {
 return a.equals(b);
 }
 
 static boolean STRNE(String a, String b) {
 return !STREQ(a,b);
 }
 
 static boolean STRGT(String a, String b) {
 return a.compareTo(b) > 0;
 }
 
 static boolean STRLT(String a, String b) {
 return a.compareTo(b) < 0;
 }
 
 static boolean STRGE(String a, String b) {
 return a.compareTo(b) >= 0;
 }
 
 static boolean STRLE(String a, String b) {
 return a.compareTo(b) <= 0;
 }
}
```
The Java code defines six helper functions (STREQ, STRNE, STRGT, STRLT, STRGE, and STRLE) that compare two strings for exact equality, inequality, greater than, less than, greater than or equal to, and less than or equal to, respectively. The main function then uses these functions to compare the strings passed as command-line arguments.
The STREQ and STRNE functions use the `equals` method of the `String` class to perform the comparison, while the other three functions use the `compareTo` method. The `compareTo` method compares two strings lexically and returns an integer value indicating their relationship. A negative return value indicates that the first string is less than the second, a positive return value indicates that the first string is greater than the second, and 0 indicates that the two strings are equal.
The `STREQ` function returns true if the two strings are exactly equal, and false otherwise. The `STRNE` function returns the opposite of this result. The other three functions return true if the first string is less than, greater than, or equal to the second string, respectively.
Note that the Java code does not handle comparison of numeric strings in a way that is consistent with the C code. If you want to perform numeric string comparisons, you will need to write additional code to handle them properly.

