The error is due to missing semicolons at the end of each line where an object is being assigned or method is being called. Here's the fix: Add a semicolon at the end of each line where an object is being assigned or method is being called.
Here's the corrected code in a single code block:
```java
import java.io.File;
public class Main {
    public static void main(String[] args) {
        // For current working directory
        File fileInDir = new File("input.txt");
        System.out.println(fileInDir.exists() ? "Exists" : "Does not exist"));

        File dirInDir = new File("docs");
        System.out.println(dirInDir.exists() ? "Exists" : "Does not exist"));

        // For file and directory in filesystem root
        File fileInRoot = new File("/input.txt"));
        System.out.println(fileInRoot.exists() ? "Exists" : "Does not exist"));

        File dirInRoot = new File("/docs");
        System.out.println(dirInRoot.exists() ? "Exists" : "Does not exist"));
    }
}
```
