```java
import java.io.File;

public class FileRename {

    public static void main(String[] args) {
        // Rename in the current working directory
        File input = new File("input.txt");
        File output = new File("output.txt");
        File docs = new File("docs");
        File mydocs = new File("mydocs");

        input.renameTo(output);
        docs.renameTo(mydocs);

        // Rename in the filesystem root
        try {
            File rootInput = new File("/input.txt");
            File rootOutput = new File("/output.txt");
            File rootDocs = new File("/docs");
            File rootMydocs = new File("/mydocs");

            rootInput.renameTo(rootOutput);
            rootDocs.renameTo(rootMydocs);
        } catch (Exception e) {
            System.err.println("Error renaming in the filesystem root: " + e.getMessage());
        }
    }
}
```
