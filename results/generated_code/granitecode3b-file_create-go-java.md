Sure! Here's the equivalent Java code:
```
import java.io.IOException;
public class Main {
 public static void main(String[] args) throws IOException {
 createFile("input.txt");
 createFile("/input.txt");
 createDir("docs");
 createDir("/");
 }
 
 private static void createFile(String fn) throws IOException {
 java.nio.file.Files.createFile(java.nio.file.Paths.get(fn));
 System.out.println("file " + fn + " created!");
 }
 
 private static void createDir(String dn) throws IOException {
 java.nio.file.Files.createDirectory(java.nio.file.Paths.get(dn));
 System.out.println("directory " + dn + " created!");
 }
}
``` 
This code uses the `Files` class from the Java `nio.file` package to create files and directories. The `createFile()` method creates a new empty file with the specified filename, while the `createDir()` method creates a new directory with the specified name. Both methods throw an `IOException` if an error occurs during the operation.

