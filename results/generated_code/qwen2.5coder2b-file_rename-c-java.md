To convert the given C code to Java, you can use Java's file handling capabilities. Here is how you could do it:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        // First, rename the current directory
        try {
            File currentDirectory = new File(".");
            if (currentDirectory.renameTo(new File("output"))) {
                System.out.println("Current directory renamed successfully");
            } else {
                System.out.println("Failed to rename current directory");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }

        // Then, rename the root directory
        try {
            if (new File("/").renameTo(new File("/mydocs"))) {
                System.out.println("Root directory renamed successfully");
            } else {
                System.out.println("Failed to rename root directory");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
```

### Explanation:
1. **File class**: Java provides the `File` class that allows you to interact with files and directories.
2. **rename() method**: The `rename()` method of the `File` class is used to rename a file or directory. It takes two parameters: the old name and the new name.
3. **Handling exceptions**: In case of any exceptions during the renaming process, they are caught and printed using `e.printStackTrace()`.
4. **Current working directory**: The `File "."` represents the current working directory, and `new File("output")` creates a `File` object representing "output.txt" in the current directory.
5. **Root directory**: The `File "/"` represents the root directory, and `new File("/mydocs")` creates a `File` object representing "/mydocs".
6. **Renaming directories**: The `rename()` method is used to rename both the current working directory and the root directory.

This code will perform the specified operations in Java, ensuring that the files are renamed as required.
