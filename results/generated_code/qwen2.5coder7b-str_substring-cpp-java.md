The Java equivalent of the given C++ code would be as follows:

```java
public class Main {
    public static void main(String[] args) {
        String s = "0123456789";

        int n = 3;
        int m = 4;
        char c = '2';
        String sub = "456";

        System.out.println(s.substring(n, n + m));
        System.out.println(s.substring(n));
        System.out.println(s.substring(0, s.length() - 1));
        System.out.println(s.substring(s.indexOf(c), s.indexOf(c) + m));
        System.out.println(s.substring(s.indexOf(sub), s.indexOf(sub) + m));
    }
}
```

In Java, the `substring` method is used to get a part of the string. The `indexOf` method returns the index of the first occurrence of the specified value (or substring), starting from the beginning of the string or from the provided position.

The output will be as follows:

3456
3456789
012345678
23456
456789
