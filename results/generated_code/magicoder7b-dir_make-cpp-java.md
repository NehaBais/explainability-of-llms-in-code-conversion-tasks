 The equivalent Java code would be as follows:

```java
import java.nio.file.*;

public class Main {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("usage: mkdir <path>");
            return;
        }

        Path pathToCreate = Paths.get(args[0]);
        
        try {
            Files.createDirectories(pathToCreate);
        } catch (FileAlreadyExistsException e) {
            // Directory already exists, do nothing
        } catch (IOException e) {
            System.out.println("couldn't create directory: " + pathToCreate.toString());
        }
    }
}
```

This code does the same thing as your C++ version - checks if a path to a file or directory exists, and if not it attempts to create those directories, their parents up to but excluding the root of the filesystem. If any part of this process throws an `IOException`, then an error message is printed.
