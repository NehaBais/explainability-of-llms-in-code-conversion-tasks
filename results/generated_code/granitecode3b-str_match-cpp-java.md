Sure! Here's the Java code that demonstrates the three types of string matching you requested:
```java
public class StringMatchingDemo {
 
 public static void main(String[] args) {
  String s1 = "abcd";
  String s2 = "abab";
  String s3 = "ab";
  
  // Beginning
  System.out.println("s1.startsWith(s3): " + s1.startsWith(s3));
  
  // End
  System.out.println("s1.endsWith(s3): " + s1.endsWith(s3));
  
  // Anywhere
  int index = s2.indexOf(s3);
  if (index != -1) {
   System.out.println("s2 contains s3 at index " + index);
  } else {
   System.out.println("s2 does not contain s3");
  }
 }
}
```
In this code, we use the `startsWith` method to check if `s1` starts with `s3`, the `endsWith` method to check if `s1` ends with `s3`, and the `indexOf` method to check if `s2` contains `s3`. The `indexOf` method also returns the index of the first occurrence of `s3` in `s2`, or `-1` if it is not found.

