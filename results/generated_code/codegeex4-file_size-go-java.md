```java
import java.io.File;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {

    public static void printFileSize(String filePath) {
        File file = new File(filePath);
        if (!file.exists()) {
            System.out.println("File does not exist: " + filePath);
            return;
        }
        long fileSize = file.length();
        System.out.println(fileSize);
    }

    public static void main(String[] args) {
        printFileSize("input.txt");
        Path path = Paths.get("/");
        File root = new File(path.toAbsolutePath().toString(), "input.txt");
        if (!root.exists()) {
            System.out.println("File does not exist: /input.txt in the root directory.");
            return;
        }
        long fileSize = root.length();
        System.out.println(fileSize);
    }
}
```

This Java program does exactly the same as your Golang code. The `printFileSize` method receives a file path as argument, verifies if this file exists and then prints out its size. In `main`, we call this method for two different files: "input.txt" located in the current working directory and "/input.txt" which is expected to be inside the root directory (this might not work on all systems depending on their permissions).
