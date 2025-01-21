 Here's the equivalent Java code for the provided Rust code:

```java
import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        if (args.length == 0) {
            System.err.println("No file name supplied");
            System.exit(1);
        }

        String fileName = args[0];
        File file = new File(fileName);

        try {
            if (!file.exists()) {
                throw new IllegalArgumentException("File does not exist: " + fileName);
            }

            long size = Files.size(Paths.get(fileName));
            System.out.println("Size of " + file.getName() + " is " + size + " bytes");
        } catch (IOException e) {
            System.err.println("Error: " + e.getMessage());
            System.exit(2);
        }
    }
}
```

This Java code does the following:
1. Checks if a file name is provided as an argument. If not, it prints an error message and exits with a status code of 1.
2. Tries to get the size of the specified file using `Files.size(Paths.get(fileName))`.
3. If the file does not exist or there's an I/O error, it catches the exception, prints an error message, and exits with a status code of 2.
