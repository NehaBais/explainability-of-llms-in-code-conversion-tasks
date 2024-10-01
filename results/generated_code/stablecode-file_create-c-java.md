The equivalent Java code to perform the same operations would be as follows:

```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException, InterruptedException {

        // Create a file with specified permissions and create it if it doesn't exist. The O_CREAT flag is used to create the file, and O_TRUNC flag is used to truncate/empty the file if it already exists.
        new File("output.txt").
                createNewFile(false, 0644));

        // Close the file descriptor
        Runtime.getRuntime().exec("chmod 644 output.txt");

        // Create a directory with specified permissions and create it if it doesn't exist.
        new File("docs").mkdirs();

    }
}
```
The Java code uses the `java.io` package to handle file operations. The script uses the `File` class to interact with files and directories. It also utilizes methods like `createNewFile()`, `mkdirs()`, etc., provided by the `File` class. 

Java is a high-level, object-oriented programming language that provides an efficient way to perform complex tasks such as file operations.
