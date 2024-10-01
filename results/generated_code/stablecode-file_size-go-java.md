Below is the Java equivalent of your Go code:

```java
import java.io.File;
import java.io.IOException;

public class Main {

    public static void printFileSize(String filePath) {
        File file = new File(filePath);
        if (!file.exists()) {
            System.out.println("The file " + filePath + " does not exist.");
        } else {
            long fileSize = file.length();
            System.out.println("The size of the file " + filePath + " is " + fileSize + " bytes.");
        }
    }

    public static void main(String[] args) {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }

}
```

This Java code does the exact same thing as your Go code: it prints out the size in bytes of a file named "input.txt" that should exist in the current working directory, and another one in the file system root. The `printFileSize` method takes a file path string as an argument and determines the size of the file at the given path. If the file does not exist at the given path, the method prints out an error message indicating that the file does not exist at the given path.
