Here is the equivalent Java code for your C++ program:

```java
public class Main {
    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";
    
        // Beginning
        boolean startsWithS3 = s1.startsWith(s3);
        System.out.println("Does s1 start with s3? " + startsWithS3);
      
        // End
        boolean endsWithS3 = s1.endsWith(s3);
        System.out.println("Does s1 end with s3? " + endsWithS3);
        
        // Anywhere - First occurrence
        int indexOfS2InS1 = s1.indexOf(s2);
        if (indexOfS2InS1 != -1) {  // If string is not found, indexOf returns -1
            System.out.println("Does s1 contain s2 at any location? Yes. First occurrence starts at position " + indexOfS2InS1);
        } else {
            System.out.println("Does s1 contain s2 at any location? No");
        }
        
        // Anywhere - Multiple occurrences
        int nextIndex = indexOfS2InS1 + 1; 
        while (nextIndex != -1) {
            System.out.println("Next occurrence of s3 in s2 starts at position " + nextIndex);
            nextIndex = s1.indexOf(s2, nextIndex+1); // find the next occurrence starting from current index + 1 
        }
    }
}
```
This code first checks if `s1` starts with `s3` and prints a message accordingly. It then checks if `s1` ends with `s3` in similar fashion and then prints a corresponding message.
For part three, it finds the position of the first occurrence of string `s2` in `s1`. If there is no match (which is checked by seeing if indexOfS2InS1 equals -1), a different message is printed out. 
Then multiple occurrences are found and their positions are printed, starting from the position after the first occurrence until all occurrences have been found. `indexOf(String str, int fromIndex)` method of String class in Java allows us to specify the index at which we want our search to start. This makes it easier for us to find subsequent occurrences by starting one place past the previous match.

