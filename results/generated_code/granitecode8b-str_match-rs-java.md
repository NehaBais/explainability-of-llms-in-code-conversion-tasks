Here's the converted code from Rust to Java:
```
public class StringMatching {
 public static void printMatch(Integer possibleMatch) {
 if (possibleMatch != null) {
 System.out.println("Found match at pos " + possibleMatch);
 } else {
 System.out.println("Did not find any matches");
 }
 }
 
 public static void main(String[] args) {
 String s1 = "abcd";
 String s2 = "abab";
 String s3 = "ab";
 
 // Determining if the first string starts with second string
 boolean startsWithResult = s1.startsWith(s3);
 System.out.println(" determination result: " + startsWithResult);
 
 // Determining if the first string contains the second string at any location
 boolean containsResult = s1.contains(s3);
 System.out.println(" containment result: " + containsResult);
 
 // Print the location of the match for containment 
 Integer containmentMatchPos = s1.indexOf(s3);
 printMatch(containmentMatchPos); // Found match at pos 0
 
 // Determining if the first string ends with the second string
 boolean endsWithResult = s2.endsWith(s3);
 System.out.println(" end result: " + endsWithResult);
 }
}
```
The Java code demonstrates the three types of string matching as follows:
1. The `startsWith` method is used to determine if the first string starts with the second string.
2. The `contains` method is used to determine if the first string contains the second string at any location.
3. The `indexOf` method is used to find the location of the first occurrence of the second string in the first string, and then the `printMatch` method is used to print the result.

