```java
import java.io.File;
import java.io.IOException;

public class FileSizeChecker {

    public static void main(String[] args) {
        try {
            File inputFile = new File("input.txt");
            File rootInputFile = new File("/input.txt");

            long inputFileSize = inputFile.length();
            long rootInputFileSize = rootInputFile.length();

            System.out.println("Size of file input.txt is " + inputFileSize + " bytes.");
            System.out.println("Size of file /input.txt is " + rootInputFileSize + " bytes.");

        } catch (IOException e) {
            System.err.println("Error getting file size: " + e.getMessage());
        }
    }
}
```

**Explanation:**

* The code imports the necessary `java.io` classes for file operations.
* It defines a `main` method to execute the program.
* It creates two `File` objects for the input file in the current working directory and the input file in the file system root.
* It gets the file size using the `length()` method of the `File` class.
* It prints the size of each file to the console.
* It handles any `IOException` that may occur during file size retrieval.
