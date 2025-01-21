The error is caused by missing semicolons at the end of lines that define methods or statements, as well as missing braces `{}` to enclose the entire function body in Java. 

Here's how you can fix this issue:

```java
public class Main {

  static void printMatch(Optional<Integer> possibleMatch) {
    possibleMatch.ifPresent(matchPos -> System.out.println("Found match at pos " + matchPos)));
    System.out.println("Did not find any matches");
  }


  public static void main(String[] args) {

    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Determining if the first string starts with second string
    assert s1.startsWith(s3));
    // Determining if the first string contains the second string at any location
    assert s1.contains(s3));
    // Print the location of the match 
    printMatch(s1.indexOf(s3))); // Found match at pos 0
    printMatch(s1.lastIndexOf(s3))); // Did not find any matches
    // Determining if the first string ends with the second string
    assert s2.endsWith(s3));
  }
}
```
This corrected Java code performs similar operations as your provided Rust code. It checks for different types of string matching and prints the location of the match (for part 2).
