## Answer
The following Java code implements the same functionality as the C++ program:
```java
import java.io.*;

public class MakeDir {
    public static void main(String[] args) throws IOException {
        if (args.length != 1) {
            System.out.println("Usage: java MakeDir <path>");
            System.exit(1);
        }
        String path = args[0];
        File file = new File(path);
        if (!file.exists()) {
            boolean success = file.mkdirs();
            if (success) {
                System.out.println("Directory created successfully");
            } else {
                System.out.println("Failed to create directory");
            }
        } else {
            System.out.println("Directory already exists");
        }
    }
}
```