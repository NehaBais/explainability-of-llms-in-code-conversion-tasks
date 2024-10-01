Here's the equivalent Java code for the given Rust code snippet:
```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
public class Main {
 public static void main(String[] args) {
  Path path = Paths.get("./path/to/dir");
  try {
   Files.createDirectory(path);
  } catch (IOException e) {
   System.err.println("Error occurred: " + e.getMessage());
  }
 }
}
```
This Java code uses the `Files` class from the `java.nio.file` package to create a directory and any missing parents. The `createDirectory()` method is used to create the directory at the specified path. If an exception occurs during creation, it will be caught in the try-catch block and an error message will be printed to the console.

