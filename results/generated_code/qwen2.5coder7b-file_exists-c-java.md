To convert the given C code to Java, you can use Java's built-in `java.io.File` class, which provides methods to interact with the file system. Below is the equivalent Java code that checks for the existence of a regular file and a directory in both the current working directory and a specific location in the filesystem root.

```java
import java.io.File;

public class FileChecker {

    public static void main(String[] args) {
        checkFileAndDirectory("input.txt", "docs");
        checkFileAndDirectory("/input.txt", "/docs");
    }

    public static void checkFileAndDirectory(String filePath, String dirPath) {
        File file = new File(filePath);
        File directory = new File(dirPath);

        System.out.println(filePath + " is a regular file? " + (file.exists() && file.isFile()));
        System.out.println(dirPath + " is a directory? " + (directory.exists() && directory.isDirectory()));
    }
}
```

### Explanation:
1. **File Class**: The `java.io.File` class is used to represent a file or directory path.
2. **checkFileAndDirectory Method**: This method takes two parameters: the path of the file and the path of the directory. It creates `File` objects for both paths and then checks if they exist, whether they are files, and whether they are directories using the `exists()`, `isFile()`, and `isDirectory()` methods.
3. **Main Method**: The `main` method calls `checkFileAndDirectory` twice, once with relative paths (`"input.txt"` and `"docs"`) and once with absolute paths (`"/input.txt"` and `"/docs"`).

This Java code will produce output similar to the original C code, indicating whether each specified file or directory exists and what type it is.
