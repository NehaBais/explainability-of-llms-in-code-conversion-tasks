Here's the Java code that accomplishes the same task as the Python code:
```java
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
public class FileCreator {
 
 public static void createFile(String directory, String fileName) throws Exception {
  Path path = Paths.get(directory, fileName);
  Files.createDirectories(path.getParent()); // Create the parent directory if it doesn't exist
  try (BufferedWriter writer = Files.newBufferedWriter(path)) {
  }
 }
 
 public static void main(String[] args) throws Exception {
  createFile(".", "output.txt"); // Create output.txt in the current directory
  createFile("/", "docs"); // Create docs/ subdirectory in the root directory
 }
}
``` 
The Java code uses the `Files` class from the `java.nio.file` package to create files and directories. The `createDirectories()` method is used to create the parent directory if it doesn't exist, and a `try-with-resources` block is used to ensure that the file is properly closed after creation.

