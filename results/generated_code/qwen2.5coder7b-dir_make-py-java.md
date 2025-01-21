Here is the equivalent Java code for your Python function:

```Java
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        mkdirp("./path/to/dir");
    }

    public static void mkdirp(String path) {
        Path dir = Paths.get(path);
        try {
            Files.createDirectories(dir);
        } catch (Exception e) {
            System.out.println("Error creating directory: " + e.getMessage());
        }
    }
}
```
In this Java code, `mkdirp` function accepts a string argument which represents the path of the directory to be created. It uses `Paths.get()` method of `Path` class to create a `Path` object from the given path string and then `Files.createDirectories()` method is used to create directories along the specified path if they don't already exist. If there's an exception (like directory cannot be created due to permission issues), it prints an error message to standard output.
