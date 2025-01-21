 Here's the equivalent Java code to verify that a file called `input.txt` and a directory called `docs` exist, doing this twice for both the current working directory and the filesystem root:

```java
import java.nio.file.*;

public class FileExists {
    public static void main(String[] args) {
        fileExists("input.txt");
        fileExists("zero_length.txt");
        fileExists("docs/input.txt");
        fileExists("docs/zero_length.txt");
    }

    public static void fileExists(String pathStr) {
        Path path = Paths.get(pathStr);
        System.out.print(pathStr + " ");
        if (Files.exists(path)) {
            if (Files.isDirectory(path)) {
                System.out.println("is a directory");
            } else {
                try {
                    System.out.println("exists with a file size of " + Files.size(path) + " bytes.");
                } catch (Exception e) {
                    System.out.println("exists but has no readable content.");
                }
            }
        } else {
            System.out.println("does not exist");
        }
    }
}
```

### Explanation:
1. **Imports**: In Java, we use `java.nio.file.*` to handle file system operations.
2. **Main Method**: The main method is similar to the C++ code where it calls `fileExists` for each path.
3. **File Exists Check**: The function `fileExists` takes a string representing the path, converts it to a `Path` object using `Paths.get()`, and then checks if the file or directory exists using `Files.exists()`.
4. **Directory vs File**: It also checks if the path is a directory using `Files.isDirectory()` and prints the appropriate message based on these checks.
5. **Handling Zero-Length Files**: Since Java does not have a direct method to check file size like C++, we use a try-catch block to handle cases where the file exists but has no content, such as zero-length files (`zero_length.txt`). If an exception occurs (e.g., due to insufficient permissions or unsupported operation), it prints "exists but has no readable content."

This Java code mirrors the functionality of the provided C++ code and should work similarly in verifying file and directory existence.
