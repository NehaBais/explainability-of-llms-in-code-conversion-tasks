Below is the converted Java code:
```java
import java.io.File;
import java.util.Scanner;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.Files;
import java.io.IOException;

public class Main {
    public static void main(String[] args)  throws IOException {
        File_exists("input.txt");
        File_exists("zero_length.txt");
        File_exists("docs/input.txt");
        File_exists("docs/zero_length.txt");
    }

    private static void file_exists(String path) throws IOException {
    	File file = new File(path);
        if (file.exists()) {
            if (file.isDirectory()) {
                System.out.println(path + " is a directory.");
            } else {
                System.out.println(path + " exists with a file size of " + Files.size(Paths.get(path)) + " bytes.");
            }
        } else {
           System.out.println(path + " does not exist");
        }
    }
}
```
