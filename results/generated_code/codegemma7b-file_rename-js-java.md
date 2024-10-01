```java
import java.io.File;

public class FileRename {

    public static void main(String[] args) {
        // Rename in the current working directory
        File input = new File("input.txt");
        File output = new File("output.txt");
        input.renameTo(output);

        File docs = new File("docs");
        File mydocs = new File("mydocs");
        docs.renameTo(mydocs);

        // Rename in the filesystem root
        File inputRoot = new File("c:/input.txt");
        File outputRoot = new File("c:/output.txt");
        inputRoot.renameTo(outputRoot);

        File docsRoot = new File("c:/docs");
        File mydocsRoot = new File("c:/mydocs");
        docsRoot.renameTo(mydocsRoot);
    }
}
```

