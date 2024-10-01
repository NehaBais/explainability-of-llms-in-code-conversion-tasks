Java does not have a built-in way to handle UTF-8 strings, so we need to use the Charset class and InputStreamReader classes provided by java.nio. The following code converts the Rust code into Java:

```java
import java.io.*;
import java.nio.charset.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        String s = "abc文字化けdef";
        int n  = 2;
        int m = 3;

        // Print 3 characters starting at index 2 (c文字)
        System.out.println(new String(s.substring(n, n+m)));

        // Print all characters starting at index 2 (c文字化けdef)
        System.out.println(new String(s.substring(n)));

        // Print all characters except the last (abc文字化けde)
        int length = s.length();
        System.out.println(new String(s.substring(0, length - 1)));

        // Print 3 characters starting with 'b' (bc文)
        int cpos = s.indexOf('b');
        System.out.println(new String(s.substring(cpos, cpos + m)));

        // Print 3 characters starting with "けd" (けde)
        int spos = s.indexOf("けd");
        System.out.println(new String(s.substring(spos, spos + m)));
    }
}
```

Note: The `String` method `substring` does not take into account any non-ASCII characters. To get the expected result you should use the `charAt`, `codePointAt`, or `getChars` methods provided by `java.lang.String` instead of directly calling `substring`. Also, note that we're using UTF-16 encoding in this example, which doesn't handle code points above U+FFFF. If you are dealing with multi-byte encodings (e.g., UTF-8), you will need to use the correct charset for the specific encoding and decode the byte array into a string before calling `substring`.

import java.io.*;
import java.nio.charset.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        String s = "abc文字化けdef";
        int n  = 2;
        int m = 3;

        // Print 3 characters starting at index 2 (c文字)
        System.out.println(new String(s.substring(n, n+m)));

        // Print all characters starting at index 2 (c文字化けdef)
        System.out.println(new String(s.substring(n)));

        // Print all characters except the last (abc文字化けde)
        int length = s.length();
        System.out.println(new String(s.substring(0, length - 1)));

        // Print 3 characters starting with 'b' (bc文)
        int cpos = s.indexOf('b');
        System.out.println(new String(s.substring(cpos, cpos + m)));

        // Print 3 characters starting with "けd" (けde)
        int spos = s.indexOf("けd");
        System.out.println(new String(s.substring(spos, spos + m)));
    }
}
