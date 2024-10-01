Sure! Here's the converted code in Java:
```
import java.io.*;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        String file_name = "";
        if (args.length == 0) {
            Scanner scanner = new Scanner(System.in);
            System.out.print("Enter the name of the file: ");
            file_name = scanner.nextLine();
        } else {
            file_name = args[1];
        }

        File file = new File(file_name);
        if (!file.exists()) {
            System.err.println("File not found: " + file.getName());
            System.exit(1);
        }

        Path path = file.toPath();
        BasicFileAttributes attrs = Files.readAttributes(path, BasicFileAttributes.class);

        System.out.printf("Size of %s is %d bytes%n", file_name, attrs.size());
    }
}
```
Note that this code uses the `java.nio.file` package to read the file metadata and the `java.io` package for I/O operations. Also, it's important to handle the case where the user doesn't provide a file name as an argument or enters an invalid file name.
