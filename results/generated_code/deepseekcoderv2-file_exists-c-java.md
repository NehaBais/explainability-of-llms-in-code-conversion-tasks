 Here's the equivalent Java code for the provided C code. This Java code checks if `input.txt` and `docs` exist as regular files and directories in both the current working directory and the root filesystem.

```java
import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class FileChecker {
    // Check if a file exists and is a regular file
    public static boolean checkReg(String path) {
        File file = new File(path);
        return file.exists() && file.isFile();
    }

    // Check if a directory exists and is a directory
    public static boolean checkDir(String path) {
        File dir = new File(path);
        return dir.exists() && dir.isDirectory();
    }

    public static void main(String[] args) {
        System.out.printf("input.txt is a regular file? %s\n", checkReg("input.txt") ? "yes" : "no");
        System.out.printf("docs is a directory? %s\n", checkDir("docs") ? "yes" : "no");
        System.out.printf("/input.txt is a regular file? %s\n", checkReg("/input.txt") ? "yes" : "no");
        System.out.printf("/docs is a directory? %s\n", checkDir("/docs") ? "yes" : "no");
    }
}
```

This Java code performs the same checks as the C code: it verifies if `input.txt` and `docs` are regular files and directories, respectively, in both the current working directory and the root filesystem.
