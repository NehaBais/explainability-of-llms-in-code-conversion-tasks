In Java, you can use the `java.io.File` and `java.nio.file.Files` classes to create new empty files and directories. Here's how you can rewrite your C++ code in Java:

```java
import java.io.File;
import java.io.IOException;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) throws IOException {
        // Create an empty file called "output.txt" in the current working directory and filesystem root
        createEmptyFile("output.txt");
        createEmptyFile("/output.txt");

        // Create an empty directory called "docs" in the current working directory and filesystem root
        createDirectory("docs");
        createDirectory("/docs");
    }

    private static void createEmptyFile(String fileName) throws IOException {
        File file = new File(fileName);
        if (file.createNewFile()) {
            System.out.println("File created: " + fileName);
        } else {
            System.out.println("File already exists.");
        }
    }

    private static void createDirectory(String directoryName) throws IOException {
        Path path = Paths.get(directoryName);
        if (!Files.exists(path)) {
            Files.createDirectories(path);
            System.out.println("Directory created: " + directoryName);
        } else {
            System.out.println("Directory already exists.");
        }
    }
}
```

### Explanation:

1. **File Creation**:
   - The `createEmptyFile` method checks if the file already exists and creates it if it doesn't.

2. **Directory Creation**:
   - The `createDirectory` method uses `Files.createDirectories` to create a directory if it does not already exist.

3. **Error Handling**:
   - Both methods use exceptions to handle any errors that might occur during the file or directory creation process.

### Important Notes:

- Java's `File` and `Path` APIs do not throw checked exceptions like C++'s `std::filesystem`. Instead, they use unchecked exceptions such as `IOException`.
- The `Files.createDirectories` method will create parent directories as needed. If a directory already exists at the specified path, it will not be recreated.
  
This code should work on any platform that supports Java, including Windows, macOS, and Linux.
