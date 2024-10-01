Below is the equivalent Java code for the provided Rust code.

The below Java code does the following: 

- It reads metadata of a file named "input.txt" in the current working directory, and another one in the root directory.
- If such files do not exist or there are other issues (like insufficient permissions), it will print an error message to the console and then terminate.
- If the files exist, it will print the size of the first file in bytes along with the size of the second file as well. 

```java
import java.io.File;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;

public class FileSizeChecker {

    public static void main(String[] args) {

        if (args.length < 1)) {
            System.out.println("Please provide a file name as an argument"));
            return;
        }
        
        String inputFileName = args[0];
        File firstFile = new File(inputFileName);
        File secondFile = new File("/");

        try {
            List<String> firstFileLines = Files.readAllLines(Paths.get(firstFile.toURI().toString()))));
            long firstFileSizeInBytes = firstFileLines.stream().mapToInt(String::length).sum();
            System.out.println("Size of file " + inputFileName + " is " + firstFileSizeInBytes + " bytes"));

            List<String> secondFileLines = Files.readAllLines(Paths.get(secondFile.toURI().toString()))));
            long secondFileSizeInBytes = secondFileLines.stream().mapToInt(String::length).sum();
            System.out.println("Size of file in root directory is " + secondFileSizeInBytes + " bytes"));

        } catch (Exception e) {
            System.err.println("Error occurred while reading the files: " + e.getMessage()));
            e.printStackTrace();
            return;
        }
    }
}
```
The Java code above reads the size of two files using their file names as input arguments. It uses the java.nio.file API for reading all lines from a file and calculating the total number of bytes in those lines. If there is an error during this process, it prints an error message to the console and then terminates.
