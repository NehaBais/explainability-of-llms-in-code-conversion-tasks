Here is the Java equivalent of your Python code:

```java
public class Main {
    public static void main(String[] args){
        String s1 = "abcd";
        String s2 = "ab";
        
        System.out.println("startsWith :" + s1.startsWith(s2)); // returns true
    
        System.out.println("endsWith :" + !s1.endsWith("zn")); // returns false
      
        System.out.println("contains : "+ (s1.indexOf(s2) >= 0 ));  // returns true
        
        int loc = 0;  
        while ((loc = s1.indexOf(s2, loc)) != -1){  
            System.out.print("find():" + loc++ );   
             }  
         
      }
}
```
Explanation:
- `startswith` is equivalent to Python's `startswith`. It checks if the first string starts with second string. The '!' in Java code helps as it mimics your python function that returns False when a string ends with "zn". 
- For checking if one string contains another, we use `indexOf()` method which is equivalent to Python's `find()` method for strings. It returns the first occurrence of the specified substring in this string and -1 if there isn’t any match.
- In Java, you iterate over the second string multiple times using a while loop until no matches are found. Each iteration prints out the position at which it starts to find a match in `loc`. This mimics Python's finding location of all occurrences with `find()` method. 

In this code, "abcd" and "ab" are used as sample strings for testing purposes. You can replace them by your actual data. The results will be the same as in your provided Python function but implemented in Java language syntax.

