This is a Java implementation of the C++ code you provided, which uses the java.nio.file package for file operations. 

The `mkdirs` function from the java.nio.file package creates directories recursively, if they do not already exist.

```java
import java.nio.file.*;
import java.io.*;

public class Main {
    public static void main(String[] args) {
        if (args.length != 1){
            System.out.println("usage: mkdir <path>");
            return;
        }

        Path pathToCreate = Paths.get(args[0]);

        try {
            Files.createDirectories(pathToCreate);  // Creates the directories if they do not exist already
        } catch (IOException e){
            System.out.println("couldn't create directory: " + pathToCreate.toString()); // Prints error message if failed to create a directory
            return;
        }
    }
}
```
This is the equivalent code for cross-platform in that it will work equally well on Windows, macOS, and Unix-like systems (such as Linux or MacOS).
