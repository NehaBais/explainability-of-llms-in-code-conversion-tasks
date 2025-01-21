Here is how you can convert the Python code to Java:

```java
public class Main {
    public static void main(String[] args){
        String str1 = "abcd";
        String str2 = "ab";

        // Check if first string starts with second string
        boolean startsWithResult = str1.startsWith(str2);
        System.out.println("Does the first string start with the second string? " + startsWithResult);

        // Check if first string contains the second string at any location
        boolean containsResult = str1.contains(str2);
        System.out.println("Does the first string contain the second string at any location? " + containsResult);

        // Check if first string ends with the second string
        boolean endsWithResult = str1.endsWith(str2);
        System.out.println("Does the first string end with the second string? " + endsWithResult);

        // Find the location of a substring in string - Part 2 Optional Requirement 1
        int index = str1.indexOf(str2);
        System.out.println("Location of the match for 'ab' in 'abab'? " + index);

        // Find multiple occurrences of a substring - Part 2 Optional Requirement 2
        while (index != -1) {
            System.out.println("Found at: " + index);
            index = str1.indexOf(str2, index + 1);
        }
    }
}
```
This Java code will produce the same results as the Python code you provided. This code checks if one string starts with another, contains another substring anywhere in it, and ends with a certain substring. It also finds the location of a certain substring within another string and handles multiple occurrences.
