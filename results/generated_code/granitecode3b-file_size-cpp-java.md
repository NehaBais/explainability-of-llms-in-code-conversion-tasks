Sure, here's the Java code that converts the given C++ code:
```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
public class FileSizeChecker {
    public static void main(String[] args) throws IOException {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }
    
    private static void printFileSize(String filename) throws IOException {
        long size = Files.size(Paths.get(filename));
        System.out.println("Size of file " + filename + " is " + size + " bytes.");
    }
}
```
Note that I've made a few changes to the code:
- I've changed `try catch` blocks to use Java's exception handling mechanism instead of C++'s try-catch.
- I've used Java's `Files.size()` method to get the file size instead of calling `std::filesystem::file_size()`.

