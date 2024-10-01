Sure! Here's the Java code that does the same thing as the Golang code:
```java
package main;
import java.util.*;
class MatchStrings {
 public static void main(String[] args) {
 String first = "abracadabra";
 String second = "abr";
 
 System.out.println("1. " + first + " starts with " + second + ": " +
 first.startsWith(second));
 int i = first.indexOf(second);
 System.out.println("2. " + first + " contains " + second + ": " +
 (i >= 0));
 if (i >= 0) {
 System.out.print("2.1. at location ");
 for (int start = i+1;; ) {
 int j = first.indexOf(second, start);
 if (j < 0) {
 break;
 }
 System.out.print(start + ",");
 start = j + 1;
 }
 System.out.println("2.2. and that's all");
 }
 System.out.println("3. " + first + " ends with " + second + ": " +
 first.endsWith(second));
 }
}
```
This Java code uses the `startsWith`, `indexOf`, and `endsWith` methods from the `String` class to perform string matching. The `startsWith` method returns true if the first string starts with the second string, the `indexOf` method returns the index of the first occurrence of the second string in the first string, and the `endsWith` method returns true if the first string ends with the second string.
The Golang code uses the `strings.HasPrefix`, `strings.Index`, and `strings.HasSuffix` functions from the `strings` package to perform string matching. These functions are more efficient than using the `String` methods directly, as they take advantage of the underlying C library that implements them.
Both versions of the code demonstrate the three types of string matching you asked for: whether one string starts with another, whether one string contains another at any location, and whether one string ends with another. The Java version uses a loop to find all occurrences of the second string within the first string, while the Golang version uses the `strings.Index` function to find the first occurrence and then iterates over the rest of the string until it finds another occurrence.

