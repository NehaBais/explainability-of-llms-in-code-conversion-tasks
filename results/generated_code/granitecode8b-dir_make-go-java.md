Here's a Java implementation of the `mkdir -p` functionality using the `Files` class from the `java.nio.file` package:
```
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
public class MkdirAll {
 public static void main(String[] args) throws IOException {
 String path = "./path/to/dir";
 Path dirPath = Paths.get(path);
 Files.createDirectories(dirPath);
 }
}
```
This code creates a `Path` object from the input string, and then uses the `Files.createDirectories()` method to create any missing directories in the path. If the directory already exists, the method will return successfully without doing anything.

