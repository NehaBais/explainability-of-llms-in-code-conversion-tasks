Java does not have a direct equivalent to Rust's `std::fs`, but you can use the `java.io` package for the same functionality. Here is the Java code:

```java
import java.io.File;
import java.io.IOException;
public class CreateDirectory {

    public static void main(String[] args) throws IOException {
        String dirName = "./path/to/dir";

        File newDir = new File(dirName);
        if (!newDir.exists()) {
            boolean isCreated = newDir.mkdirs();

            if (isCreated)
                System.out.println("Directory created successfully");
            else
                System.err.println("Failed to create directory");
        }
    }
}
```
This code uses the `File` class in Java's `java.io` package to check whether a directory exists or not, and it creates the required path if it doesn't exist using the `mkdirs()` method. If the creation process is successful, it displays a success message; otherwise, an error message is displayed.
Remember that `./path/to/dir` should be replaced with the actual path to the desired directory.
