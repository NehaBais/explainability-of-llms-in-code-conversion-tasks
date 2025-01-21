Here is the equivalent Java code for your Rust script:

```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        try {
            create(".", "/");
        } catch (IOException e) {
            errorHandler(e, 1);
        }
    }

    private static void create(String... roots) throws IOException {
        for (String root : roots) {
            File f = new File(root + File.separator + "output.txt");
            File d = new File(root + File.separator + "docs");

            if (!d.exists()) {
                d.mkdir();
            }
            
            if (!f.createNewFile()) {
                System.out.println("Failed to create a file");
            }
        }
    }

    private static void errorHandler(Exception error, int code) {
        System.err.println("Error: " + error.getMessage());
        System.exit(code);
    }
}
```
This Java script accomplishes the same task as your Rust script. It attempts to create an empty "output.txt" file and a "docs" directory in each provided root directory (in this case "." and "/"). If there's an issue during the process, it will print the error message to stderr and then exit with the given code.
