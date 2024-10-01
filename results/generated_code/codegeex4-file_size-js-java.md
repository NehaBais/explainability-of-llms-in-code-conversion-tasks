Here is how you can convert your JavaScript code to Java:

```java
import java.io.File;

public class FileSize {
    public static void main(String[] args) {
        // Get the size of file in current working directory
        File file = new File("input.txt");
        System.out.println(file.length() + " bytes");

        // Get the size of file in root of the filesystem
        File rootFile = new File("/input.txt");
        if (rootFile.exists()) {
            System.out.println(rootFile.length() + " bytes");
        } else {
            System.out.println("File doesn't exist at root.");
        }
    }
}
```

This Java code uses the `java.io.File` class to get the size of a file. It prints out the size in bytes to the console. Note that in this case, you must have read permission for the files.
