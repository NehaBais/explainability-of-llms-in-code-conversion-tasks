In Java, the java.nio.file package provides similar functionality to that of the C++ filesystem library. Here is your code converted to Java.

```java
import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        fileExists("input.txt");
        fileExists("zero_length.txt");
        fileExists("docs/input.txt");
        fileExists("docs/zero_length.txt");

        // for the current working directory
        Path path = Paths.get("");
        fileExists(path.resolve("input.txt").toString());
        fileExists(path.resolve("zero_length.txt").toString());

        // for the filesystem root
        path = Paths.get("/");
        fileExists(path.resolve("input.txt").toString());
        fileExists(path.resolve("zero_length.txt").toString());
    }

    public static void fileExists(String path) {
        File f = new File(path);
        System.out.print(f.getAbsolutePath());

        if (f.exists()) {
            if (f.isDirectory()) {
                System.out.println(" is a directory");
            } else {
                System.out.println(" exists with a file size of " + f.length() + " bytes.");
            }
        } else {
            System.out.println(" does not exist");
        }
    }
}
```

Please note that the Java version uses `java.io.File` for checking if a path is a directory or a file, and its methods like `exists()`, `isDirectory()`, and `length()` to get the size of the file. Also, note that the absolute path is printed out using `getAbsolutePath()`. If you want only the relative path, replace it with `getName()`.

The root directory (path starting with '/') may not be available or accessible on all systems, so make sure you have access rights to the root directory and that such a directory actually exists.
