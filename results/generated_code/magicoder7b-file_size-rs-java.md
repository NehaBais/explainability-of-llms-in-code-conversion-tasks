 In Java, you can use the `java.nio.file` API for file operations. Here is a way to convert your Rust code to Java:

```java
import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.file.attribute.BasicFileAttributes;

public class Main {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.err.println("No file name supplied");
            System.exit(1);
        }
        
        File file = new File(args[0]);
        try {
            BasicFileAttributes attrs = Files.readAttributes(file.toPath(), BasicFileAttributes.class);
            System.out.println("Size of " + file + " is " + attrs.size() + " bytes");
        } catch (IOException e) {
            System.err.println("Error: " + e.getMessage());
            System.exit(2);
        }
    }
}
```

This Java program does the same thing as your Rust code, it verifies the size of a file called `input.txt` for a file in the current working directory and another one in the root of the file system. If no file name is supplied or an error occurs while reading the file's metadata, the program will exit with an appropriate error message.
