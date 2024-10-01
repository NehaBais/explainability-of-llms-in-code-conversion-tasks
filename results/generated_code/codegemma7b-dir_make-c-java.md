```java
import java.io.File;

public class Mkdirp {

    public static void main(String[] args) {
        if (args.length != 1) {
            System.err.println("Usage: mkdirp <path>");
            System.exit(1);
        }

        String path = args[0];
        File directory = new File(path);

        if (!directory.exists()) {
            directory.mkdirs();
        } else if (!directory.isDirectory()) {
            System.err.println("Error: The path " + path + " already exists but is not a directory.");
            System.exit(1);
        }
    }
}
```
