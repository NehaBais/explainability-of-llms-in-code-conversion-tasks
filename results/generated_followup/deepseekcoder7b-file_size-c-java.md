The error occurs because Java does not support C-style comments for disabling code. The correct comment syntax is "//" for line comment or "/* */" for block comment in Java. So, I'll change the line `String absolutePathToRoot  =   /* specify the path to your root directory here  */;` to `String absolutePathToRoot = "/"; // specify the path to your root directory here`.

The corrected code is:
```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        File file1 = new File("input.txt");
        if (file1.exists()) 
            System.out.println(file1.length());    // In bytes
        
        String absolutePathToRoot = "/"; // specify the path to your root directory here
        File file2 = new File(absolutePathToRoot + "input.txt");
        if (file2.exists()) 
            System.out.println(file2.length());  // In bytes
    }
}
```

