```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        if (args.length < 1) {
            System.err.println("No file name supplied");
            System.exit(1);
        }
        
        File inputTxtFile = new File(args[0]);
        File rootDir = new File("/");
        
        try {
            long sizeOfInputTxt = inputTxtFile.length();
            long sizeOfRootDir = rootDir.length();
            
            System.out.println("Size of file.txt is " + sizeOfInputTxt + " bytes");
            System.out.println("Size of root directory is " + sizeOfRootDir + " bytes");
        } catch (IOException e) {
            System.err.println("Error reading the file(s): " + e.getMessage());
            System.exit(2);
        }
    }
}
```

In this Java code, the `File` class is used to represent files and directories. The method `length()` of the `File` class returns the length of the file in bytes.

The `main` function first checks if a command-line argument was provided, otherwise it prints an error message and exits with status 1. Then, it creates instances of `File` for `input.txt` and the root directory, and retrieves their sizes using the `length()` method. Finally, it prints the sizes to the console. The error handling is similar to Rust's error handling system.
