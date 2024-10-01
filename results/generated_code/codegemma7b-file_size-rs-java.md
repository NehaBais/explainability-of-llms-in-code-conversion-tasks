```java
import java.io.File;
import java.io.IOException;

public class FileSizeChecker {

    public static void main(String[] args) {
        String fileName = args.length > 0 ? args[0] : "input.txt";

        try {
            File file = new File(fileName);
            long size = file.length();
            System.out.println("Size of " + fileName + " is " + size + " bytes");
        } catch (IOException e) {
            System.err.println("Error: " + e.getMessage());
            System.exit(1);
        }
    }
}
```

**Explanation:**

* The Java code uses the `File` class to interact with files.
* The `length()` method of the `File` class returns the size of the file in bytes.
* The `args` array stores the command-line arguments.
* The code checks if the first argument is provided and uses it as the file name if available.
* It throws an `IOException` if there is an error reading the file size.
* The error message is printed to the standard error stream and the program exits with a code of 1.
