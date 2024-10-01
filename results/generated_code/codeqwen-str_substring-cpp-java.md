Here is the Java equivalent of your C++ code:

```java
public class Main {
    public static void main(String[] args) {
        String s = "0123456789";

        int n = 3;
        int m = 4;
        char c = '2';
        String sub = "456";

        System.out.println(s.substring(n, Math.min(n + m, s.length())));
        System.out.println(s.substring(n));
        System.out.println(s.substring(0, s.length() - 1));
        System.out.println(s.substring(s.indexOf(c), Math.min(s.indexOf(c) + m, s.length())));
        System.out.println(s.substring(s.indexOf(sub), Math.min(s.indexOf(sub) + m, s.length())));
    }
}
```

This Java program does exactly the same as your C++ code. The `String.substring()` function in Java works very similarly to the `std::string::substr()` function in C++. 

However, there is a small difference: the `Math.min()` function is used instead of the comma operator (`,`) in the index calculation because it provides a more explicit way of making sure that we don't go out of bounds. Also, Java uses `String.indexOf(char)` and `String.indexOf(String)` to find the first occurrence of a character or substring within a string respectively. These are used instead of the `std::string::find()` function in C++.
