In Java, we don't have built-in support for Unicode characters directly in strings as they are byte sequences (not logical). But Java has a class StringBuilder which can handle such operations.

Here is the equivalent code to your Python snippet:

```Java
public class Main {
    public static void main(String[] args) {
        String s = "abcdefgh";
        int n = 2, m = 3;
        char c1 = 'd', c2 = 'c';
        String s1 = "cd", s2 = "ef";
        
        // starting from n=2 characters in and m=3 in length;
        System.out.println(s.substring(n-1, n+m-1));
        
        // starting from n characters in, up to the end of the string;
        System.out.println(s.substring(n-1));
    
        // whole string minus last character;
        System.out.println(s.substring(0, s.length()-1));
        
        // starting from a known character c1="d" within the string and of m length;
        int indx = s.indexOf(c1);
        if (indx != -1) {
            System.out.println(s.substring(indx, Math.min(indx+m, s.length())));
        }
        
        // starting from a known substring s1="cd" within the string and of m length;
        indx = s.indexOf(s1);
        if (indx != -1) {
            System.out.println(s.substring(indx, Math.min(indx+m, s.length())));
        }
        
        // starting from a known substring s2="ef" within the string and of m length;
        indx = s.indexOf(s2);
        if (indx != -1) {
            System.out.println(s.substring(indx, Math.min(indx+m, s.length())));
        }
    }
}
```
This Java code does the same operations as your Python snippet but in a slightly different way since Java has its own methods to handle these operations unlike Python which provides built-in support for such operations directly. Also, please note that if m exceeds the string length from index indx, then it returns only till the end of the string and does not throw error like python does.

