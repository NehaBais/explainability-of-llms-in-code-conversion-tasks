Below is the equivalent Java code:

```java
public class SubstringExample {
    public static void main(String[] args){
        String s = "0123456789";

        int n = 3;
        int m = 4;
        char c = '2';
        String sub = "456";

        System.out.println(s.substring(n, n+m)); // Prints: 3456
        System.out.println(s.substring(n));       // Prints: 3456789
        System.out.println(s.substring(0, s.length()-1));   // Prints: 012345678
        System.out.println(s.substring(s.indexOf(c), s.indexOf(c)+m));    // Prints: 2345
        System.out.println(s.substring(s.indexOf(sub), s.indexOf(sub)+m));   // Prints: 456
    }
}
```
Note that `String#indexOf` returns the index of the first occurrence of a specified string in this string, starting at the specified index. If the character or substring is not found, it returns -1. The `substring` method can also be used to extract a portion of the string as follows:
- `substring(n)` from index n to the end
- `substring(m)` from index 0 to m-1
- `substring(n, m)` from index n to index m-1

These are equivalent to `s.charAt(n) + s.substring(n+1)`.

Also note that Java does not have a built-in support for Unicode code points or UTF-8/UTF-16 encoding. If you want to work with UTF-8 or UTF-16 strings, you need to decode the string before working with it and encode it back after your operation. Java also uses UTF-16 to represent all character data internally, so operations on characters are done based on Unicode code points. 

The `String` class in Java provides several methods that allow you to manipulate a string. For example:
- `s.length()` returns the length of a string
- `s.charAt(n)` returns the nth character of a string
- `s.indexOf(ch)` or `s.indexOf(str)` returns the index at which the specified substring or character is found in this string. If not found, it returns -1. 
- `s.substring(start, end)` extracts a portion of a string based on starting and ending indices. The characters at indices start through end-1 are returned as a new string. 

Remember to handle any potential exceptions when working with strings or using the substring method.
