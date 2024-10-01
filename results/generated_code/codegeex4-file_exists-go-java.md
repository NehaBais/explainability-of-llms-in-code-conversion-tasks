Below is the Java equivalent of your Golang code:

```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        File currentDirectory = new File("");
        File rootDirectory = new File("/");
        
        printStat("input.txt", currentDirectory);
        printStat("/input.txt", currentDirectory);
        printStat("docs", currentDirectory);
        printStat("/docs", currentDirectory);

        printStat("input.txt", rootDirectory);
        printStat("/input.txt", rootDirectory);
        printStat("docs", rootDirectory);
        printStat("/docs", rootDirectory);
    }

    public static void printStat(String path, File directory) {
        File file = new File(directory, path);
        try {
            if (!file.exists()) {
                System.out.println(file.getPath() + " does not exist.");
            } else if (file.isDirectory()) {
                System.out.println(file.getPath() + " is a directory");
            } else {
                System.out.println(file.getPath() + " is a file");
            }
        } catch (SecurityException se) {
            System.out.println(se);
        }
    }
}
```

Please note:
- The `File` class in Java is used to work with files and directories.
- The `main` method is the entry point of any Java application.
- A `File` object is created for each path using a directory and a path. If no directory is specified, the current working directory will be used.
- We use the `exists()`, `isDirectory()` methods of the `File` class to check if the file or directory exists, and whether it is a directory or not. The `getPath()` method returns the absolute path of the file/directory.
- Exceptions are caught using a try-catch block. In this case, we catch `SecurityException`, which can be thrown by certain operations if the application doesn't have enough permissions to access the file/directory.
