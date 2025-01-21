Here is the equivalent Java code for your Rust script:

```java
import java.io.File;
import java.io.IOException;

public class Main {

    public static void main(String[] args) {
        if (args.length == 0) {
            System.err.println("No file name supplied");
            System.exit(1);
        }

        String fileName = args[0];
        File file = new File(fileName);

        try {
            long fileSize = file.length();
            System.out.println("Size of " + fileName + " is " + fileSize + " bytes");

        } catch (SecurityException se) {
            System.err.println("Error: " + se.getMessage());
            System.exit(2);
        }
    }

}
```

Here's how it works:

- The `main` method checks if a command-line argument is provided. If not, it prints an error message to the standard error stream and exits with status code 1.
- The first argument (`args[0]`) is supposed to be the file name.
- We create a new `File` object with this name.
- Then we use the `length()` method of the `File` class to get the size of the file in bytes. This value is printed on the standard output stream.
- If any exception occurs during this process, it's caught and an error message is printed to the standard error stream before exiting with status code 2.
