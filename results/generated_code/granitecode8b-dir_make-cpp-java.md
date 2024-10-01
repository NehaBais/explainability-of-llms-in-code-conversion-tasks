Here's the Java code that implements the same functionality as the C++ code:
```java
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
public class DirectoryCreator {
 public static void main(String[] args) {
 if (args.length != 1) {
 System.out.println("usage: mkdir <path>");
 return;
 }

 Path pathToCreate = FileSystems.getDefault().getPath(args[0]);

 try {
 Files.createDirectories(pathToCreate);
 } catch (Exception e) {
 System.out.println("couldn't create directory: " + pathToCreate);
 }
 }
}
```
The `DirectoryCreator` class contains a `main` method that takes an array of strings as input. If the length of the array is not equal to 1, it prints a usage message and returns. Otherwise, it creates a `Path` object from the first string in the array using the default file system obtained from `FileSystems.getDefault()`.
The code then attempts to create the directories specified by the path using `Files.createDirectories`. If an exception is thrown, it means that the directory could not be created and the code prints an error message. Otherwise, if the directories are successfully created, the code returns.
Note that this Java implementation uses the NIO.2 file system API introduced in Java 7, which provides a more modern and standard way of working with files and directories than the `java.io` package used in the C++ code.

