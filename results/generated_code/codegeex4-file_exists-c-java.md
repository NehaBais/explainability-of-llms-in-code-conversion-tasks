Below is the Java equivalent of your C code. It uses Java's `File` class to check if a file or directory exists and get its type.

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        // Check in current working directory
        System.out.println("input.txt is a regular file? " + checkFileOrDir("./input.txt", true));
        System.out.println("docs is a directory? " + checkFileOrDir("./docs", false));

        // Check in root of filesystem
        System.out.println("/input.txt is a regular file? " + checkFileOrDir("/input.txt", true));
        System.out.println("/docs is a directory? " + checkFileOrDir("/docs", false));
    }

    public static String checkFileOrDir(String path, boolean isFile) {
        File f = new File(path);
        if (isFile ? f.isFile() : f.isDirectory()) {
            return "yes";
        } else {
            return "no";
        }
    }
}
```

This Java code checks for the existence of the file or directory and prints whether it is a regular file or a directory. For each check, you need to specify if you are checking for a file (`true`) or a directory (`false`). The `checkFileOrDir` method returns "yes" if the file or directory exists and its type matches the expected type (file or directory) and "no" otherwise.
