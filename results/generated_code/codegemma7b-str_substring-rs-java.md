```java
public class SubstringDisplay {

    public static void main(String[] args) {
        String s = "abc文字化けdef";
        int n = 2;
        int m = 3;

        // Print 3 characters starting at index 2 (c文字)
        String substring1 = s.substring(n, n + m);
        System.out.println(substring1);

        // Print all characters starting at index 2 (c文字化けdef)
        String substring2 = s.substring(n);
        System.out.println(substring2);

        // Print all characters except the last (abc文字化けde)
        String substring3 = s.substring(0, s.length() - 1);
        System.out.println(substring3);

        // Print 3 characters starting with 'b' (bc文)
        int cpos = s.indexOf('b');
        String substring4 = s.substring(cpos, cpos + m);
        System.out.println(substring4);

        // Print 3 characters starting with "けd" (けde)
        int spos = s.indexOf("けd");
        String substring5 = s.substring(spos, spos + m);
        System.out.println(substring5);
    }
}
```
