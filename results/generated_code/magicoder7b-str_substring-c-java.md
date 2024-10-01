 Below is the equivalent Java code for the given C code. Java uses character arrays (StringBuilder) instead of plain char pointers for strings as it doesn't support 'null' terminated strings like in C, so we need to keep track of the string length separately from the array:
```java
public class Main {
    public static void main(String[] args) {
        String s = "hello world shortest program";
        System.out.println(substring(s, 12, 5));   // prints 'short'
        System.out.println(substring(s, 6, -1));  // prints 'world shortest program'
        System.out.println(str_wholeless1(s));    // prints "..." progra"
        System.out.println(str_fromch(s, 'w', 5));// prints "world"
        System.out.println(str_fromstr(s, "ro", 3));// prints "rog"
    }
    
    public static String substring(String s, int n, int m) {
        // check for null s
        if (s == null) return null;
        
        // negative m to mean 'up to the mth char from right'
        if (m < 0) m = s.length() + m - n + 1;

        // n < 0 or m < 0 is invalid
        if (n < 0 || m < 0) return null;
        
        String result = "";
        for(int i = 0 ; i < n ; ++i ) {
            char ch = s.charAt(i);
            if(ch == '\u0000') { // checks for string ends before n
                return null;
            }
        }
        
        result = new StringBuilder(s).substring(n, n + m).toString();  // strncat() style substring in java
        return result;
    }
    
    public static String str_wholeless1(String s) {
        return substring(s, 0, s.length() - 1);
    }
    
    public static String str_fromch(String s, char ch, int m) {
        return substring(s, s.indexOf(ch), m);
    }
    
    public static String str_fromstr(String s, String in, int m) {
        return substring(s, s.indexOf(in), m);
    }
}
```
