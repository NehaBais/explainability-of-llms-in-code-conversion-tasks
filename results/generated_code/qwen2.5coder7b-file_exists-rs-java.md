Here's how you can convert the given Rust code to Java:
```java
import java.io.File;
import java.nio.file.Files;

public class Main {
    public static void main(String[] args) {
        String[] files = {"input.txt", "docs", "/input.txt", "/docs"};

        for (String file : files) {
            File f = new File(file);

            if (!Files.exists(f.toPath())) {
                System.out.println(file + " does not exist");
                continue;
            }

            if (f.isDirectory()) {
                System.out.println(file + " is a directory");
            } else {
                System.out.println(file + " is a file");
            }
        }
    }
}
```

This code checks for the existence of each file and directory in the given array. It uses the `File` class from Java's I/O library to perform these checks. If a file or directory does not exist, it prints an error message. Otherwise, it checks if it is a directory or a regular file, and prints the appropriate message.
