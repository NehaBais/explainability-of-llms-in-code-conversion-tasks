```java
import java.io.File;
import java.io.IOException;

public class FileCreation {

    private static final String FILE_NAME = "output.txt";
    private static final String DIR_NAME = "docs";

    public static void main(String[] args) {
        try {
            create(".");
            create("/");
        } catch (IOException e) {
            System.err.println("Error: " + e.getMessage());
            System.exit(1);
        }
    }

    private static void create(String root) throws IOException {
        File f_path = new File(root, FILE_NAME);
        File d_path = new File(root, DIR_NAME);
        d_path.mkdir();
        f_path.createNewFile();
    }
}
```

