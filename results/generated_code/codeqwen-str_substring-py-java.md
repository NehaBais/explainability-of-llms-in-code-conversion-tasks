Here is how you can convert the Python code to Java:

```java
public class Main {
    public static void main(String[] args) {
        String s = "abcdefgh";
        int n = 2;
        int m = 3;
        char charc = 'd';
        String chars = "cd";

        // starting from n=2 characters in and m=3 In length;
        System.out.println(s.substring(n - 1, n + m - 1));

        // starting from n characters in, up to the end of the string;
        System.out.println(s.substring(n - 1));

        // whole string minus last character;
        System.out.println(s.substring(0, s.length() - 1));

        // starting from a known character char="d" within the string and of m length;
        int indx = s.indexOf(charc);
        System.out.println(s.substring(indx, indx + m));

        // starting from a known substring chars="cd" within the string and of m length. 
        indx = s.indexOf(chars);
        System.out.println(s.substring(indx, indx + m));
    }
}
```

Java has a built-in method `substring()` that does exactly what Python's `[n:m]` syntax does. It takes two integer parameters representing the start and end indices of the substring you want to extract from the original string, and returns the new substring. The first parameter is inclusive (it includes the character at that index), while the second parameter is exclusive (it excludes the character at that index). That's why we subtract 1 from `n` in every place where we use it.
