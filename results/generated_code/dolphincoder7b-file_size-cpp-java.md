Here is the converted Java code:
```java
import java.nio.file.*;
import java.util.Scanner;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        printFile("input.txt");
        printFile("/input.txt");
    }

    private static void printFile(String fileName)  {
        try (var scanner = new Scanner(Files.newInputStream(Paths.get(fileName)))) {
            System.out.println("Size of file " + fileName + " is " + Files.size(Paths.get(fileName)) + " bytes.");
        } catch (IOException e) {
            System.err.println(e);
        }
    }
}
```
In the Java version, we use `Files` and `Paths` classes for file operations, and we use try-with-resources statement to close `Scanner`. The `printFile()` method handles all errors during reading and printing out.
