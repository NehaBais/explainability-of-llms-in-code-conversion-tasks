Below is the Java equivalent of your Golang code:

```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        createFile(new File("output.txt"));
        createFile(new File("/output.txt"));
        createDirectory(new File("docs"));
        createDirectory(new File("/docs"));
    }

    private static void createFile(File file) {
        try {
            if (file.createNewFile()) {
                System.out.println("file " + file.getName() + " created!");
            }
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }

    private static void createDirectory(File directory) {
        if (!directory.exists()) {
            if (directory.mkdir()) {
                System.out.println("directory " + directory.getName() + " created!");
            }
        }
    }
}
```
Please note that in Java, you do not need to explicitly close the file after creating it because Java uses a different garbage collection system than Go does. However, you also cannot create files or directories in root ("/") without proper permissions.

Note: Always remember to handle exceptions and errors properly when working with filesystem operations in both languages, as they can sometimes be tricky and error-prone.
