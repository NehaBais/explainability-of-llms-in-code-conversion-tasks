Sure, here is the equivalent Java code for the given C++ code - 

```java
public class Main {
    
    public static void main(String[] args) {
        
        String s = "0123456789";

        int n = 3, m = 4, c = '2';
        String sub = "456";
        System.out.println(s.substring(n, n + m)); //prints "3456"
        System.out.println(s.substring(n)); //prints "3456789"
        System.out.println(s.substring(0, s.length() - 1)); //prints "0123456789"
        System.out.println(s.substring(s.indexOf(c), n + m)); // prints "23456"
        System.out.println(s.substring(s.indexOf(sub), n + m)); //prints "456"
    }
}
```
Please note that in Java, the substring method includes the start index and excludes the end index, which is why we are using `n+m` instead of `n` for the second print statement. The Java version also uses the `indexOf()` function to locate the character or substring to start from.
