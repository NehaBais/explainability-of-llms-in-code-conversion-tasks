In Java, you can use `java.nio.file.Files` to create directory and any missing parents. Here is a function that creates the given directory with its parent directories.

```java
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        String dirPath = "./path/to/dir";
        try {
            Files.createDirectories(Paths.get(dirPath));
        } catch (IOException e) {
            System.err.println("An Error Occured: " + e.getMessage());
        }
    }
}
```
In this function, `Files.createDirectories` creates the directory and all its parent directories if they do not exist. If the directory already exists or an error occurs while creating it, it prints out the error message.

Note that `Paths.get(dirPath)` converts the string path into a `java.nio.file.Path` object which is needed by `Files.createDirectories`. Also, this function can be used cross-platform because `java.nio.file.Paths.get()` will use appropriate operating system-specific paths and not throw an exception if parent directories do not exist.
