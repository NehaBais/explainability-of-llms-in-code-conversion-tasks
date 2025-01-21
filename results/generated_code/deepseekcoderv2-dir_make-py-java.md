 To convert the given Python code to Java, we can use a similar approach with the `java.nio.file` package which provides a method called `createDirectories`. This method will create the directory and any necessary but nonexistent parent directories. If the directory already exists, it will return successfully without throwing an exception.

Here's how you can implement this in Java:

```java
import java.nio.file.Files;
import java.nio.file.Paths;

public class Mkdirp {
    public static void mkdirp(String path) {
        try {
            Files.createDirectories(Paths.get(path));
        } catch (Exception e) {
            // Handle exceptions if necessary
            System.err.println("Error creating directory: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        mkdirp("./path/to/dir");
    }
}
```

### Explanation:
1. **Import Statements**: We import `Files` and `Paths` from the `java.nio.file` package, which are necessary for directory creation.
2. **mkdirp Method**: The method takes a string path as an argument. It uses `Paths.get(path)` to convert the string into a `Path` object, which is then passed to `Files.createDirectories`. This method will create all necessary parent directories if they do not exist and will succeed silently if the directory already exists.
3. **Exception Handling**: The method includes a try-catch block to handle any exceptions that might be thrown by the `Files.createDirectories` method, though in this simple example, we just print an error message.
4. **Main Method**: For demonstration purposes, there's a main method that calls `mkdirp` with a sample path.

This Java code should work similarly to the Python function provided and can be run on any platform where Java is supported.
