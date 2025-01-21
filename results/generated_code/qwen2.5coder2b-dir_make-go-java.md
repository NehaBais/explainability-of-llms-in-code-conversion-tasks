Here is how you can convert the given Go code to Java. This requires the use of `java.nio.file.Path` and `Files#createDirectories` methods.

```Java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        String path = "./path/to/dir";
        try {
            Path directoryPath = Paths.get(path);
            Files.createDirectories(directoryPath, 0770);
            System.out.println("Directory created successfully.");
        } catch (IOException e) {
            System.err.println("Error creating directory: " + e.getMessage());
        }
    }
}
```

Here's the explanation of the code:

- `Paths.get(path)` creates a Path object from the given string.
- `Files.createDirectories(directoryPath, 0770)` creates the directory and its missing parent directories recursively, with permissions set to 0770. 
- The catch block is used to handle any potential IO exceptions that may occur during directory creation.

Please note that this code should be compiled using Java 1.8 or later versions as some methods used (`Files#createDirectories` and `Paths.get`) are not available in older versions of Java.
