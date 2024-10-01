Sure, here's the equivalent Java code for the given Rust code:
```java
import java.io.File;
import java.io.IOException;
import java.nio.file.*;
public class FileCreator {
 public static void main(String[] args) {
  try {
   createCurrentDirectory();
   createRootDirectory();
  } catch (Exception e) {
   e.printStackTrace();
  }
 }
 
 private static void createCurrentDirectory() throws IOException {
  Path path = Paths.get("output.txt");
  Files.createFile(path);
 }
 
 private static void createRootDirectory() throws IOException {
  Path path = Paths.get("/docs");
  Files.createDirectories(path);
 }
}
```
Note that the code uses `Paths` and `Files` classes from the `java.nio.file` package to create files and directories, respectively.

