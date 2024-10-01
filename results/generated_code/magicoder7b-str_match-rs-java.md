 Here is the equivalent Java code for your Rust program:

```java
public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";
  
    // Determining if the first string starts with second string
    System.out.println("Does s1 start with s2? " + s1.startsWith(s2));
    
    // Determining if the first string contains the second string at any location
    System.out.println("Does s1 contain s2? " + s1.indexOf(s2) != -1);
    
    // Print the location of the match for part 2
    int index = s1.indexOf(s3);
    if (index > -1){
      System.out.println("Found match at pos: " + index);
    } else {
      System.out.println("Did not find any matches");
    }
    
    // Determining if the first string ends with the second string
    System.out.println("Does s1 end with s2? " + s2.endsWith(s3));
  }
}
```
