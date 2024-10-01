Here is the Java equivalent of your C++ code:

```java
public class Main {
    static String s1 = "abcd";
    static String s2 = "abab";
    static String s3 = "ab";

    public static void main(String[] args) {
        //Beginning
        System.out.println(s1.startsWith(s3));
         //End
        System.out.println(s1.endsWith(s3));
       //Anywhere
        int loc = s2.indexOf(s3);
        while (loc != -1) {
            System.out.print(" " + loc);
            loc = s2.indexOf(s3, loc+1 );
        }
    }
}
```
In this Java code:

- The `startsWith()` method is used to check if the string starts with another string. This function returns a boolean value which indicates whether the given string begins with the specified prefix.
  
- The `endsWith()` method checks if the string ends with another string, it's similar to how you did in C++. 
    
- For finding substring at any location (part 2), Java provides a function named indexOf() which returns the first occurrence of a substring in a string. If it is unable to find a substring within the main string then it will return -1.
  
This code also handles multiple occurrences of a string for part 2 by using a while loop that repeats until no more instances of s3 are found.
