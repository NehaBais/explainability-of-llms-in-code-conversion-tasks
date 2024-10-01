 Below is your Python code converted to Java:

```java
public class Main {
    public static void main(String[] args) {
        String s = "abcdefgh";
        int n = 2, m = 3;
        char char1 = 'd', char2 = 'c';
        
        // starting from n=2 characters in and m=3 in length;
        System.out.println(s.substring(n-1, n+m-1));
        // starting from n characters in, up to the end of the string;
        System.out.println(s.substring(n-1));
        // whole string minus last character;
        System.out.println(s.substring(0, s.length() - 1));
        
        // starting from a known character char="d" within the string and of m length;
        int indx = s.indexOf(char1);
        if (indx != -1) {
            System.out.println(s.substring(indx, indx+m));
        }
        
        // starting from a known substring chars="cd" within the string and of m length. 
        indx = s.indexOf(char2);
        if (indx != -1) {
            System.out.println(s.substring(indx, indx+m));
        }
    }
}
```

Please note: Java uses `0` based indexing for strings and arrays unlike Python. Also, in case of substring operation, negative start index is allowed which means start from end to specified index from end.
