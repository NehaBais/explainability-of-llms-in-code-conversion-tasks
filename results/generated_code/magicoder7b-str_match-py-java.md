 Here is the equivalent Java code for your Python requirements:

```Java
public class Main {
    public static void main(String[] args) {
        String str1 = "abcd";
        String str2 = "ab";
        
        System.out.println("Starts with? " + str1.startsWith(str2)); // True
        
        int loc = str1.indexOf(str2);
        if (loc != -1) {
            System.out.println("Contains at location: " + loc);
        } else {
            System.out.println("Does not contain");
        }
        
        System.out.println("Ends with? " + str1.endsWith(str2)); // False
    }
}
```

Here's the breakdown of how it works: 
- The `startsWith()` method checks if the first string starts with the second string. 
- The `indexOf()` method returns the index within this string of the first occurrence of the second string. If no such occurrence is found, -1 is returned.
- The `endsWith()` method checks if the first string ends with the second string.
