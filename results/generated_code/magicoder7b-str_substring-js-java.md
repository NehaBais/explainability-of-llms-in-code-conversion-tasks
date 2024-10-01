 Below is your JavaScript code converted to Java:

```java
public class Main {
    public static void main(String[] args) {
        String str = "abcdefgh";

        int n = 2;
        int m = 3;
        
        // * starting from n characters in and of m length;
        System.out.println("Starting from n characters in and of m length: " + str.substring(n, n+m));  // => "cde"

        // * starting from n characters in, up to the end of the string;
        System.out.println("Starting from n characters in and up to the end of the string: " + str.substring(n));   // => "cdefgh"
        
        // * whole string minus last character;
        System.out.println("Whole string minus last character: " + str.substring(0, str.length() - 1)); // => "abcdefg"

        // * starting from a known character within the string and of m length;
        int indexOfChar = str.indexOf('b');
        if (indexOfChar != -1) {
            System.out.println("Starting from a known character within the string and of m length: " + str.substring(indexOfChar, indexOfChar+m));  // => "bcd"
        } else {
            System.out.println("Character not found");
        }
        
        // * starting from a known substring within the string and of m length;
        String subStr = "bc";
        if (str.indexOf(subStr) != -1) {
            System.out.println("Starting from a known substring within the string and of m length: " + str.substring(str.indexOf(subStr), str.indexOf(subStr) + m));  // => "bcd"
        } else {
            System.out.println("Substring not found");
        }
    }
}
```
Please note that Java's `String` class has the `substring()` method which accepts two arguments representing start and end indexes. The substring is inclusive of the start index but exclusive of the end index, hence the need to add 1 to the end index when we want to extract a specific length. In case the character or substring we are looking for is not found in the string, we print "Character/Substring not found".
