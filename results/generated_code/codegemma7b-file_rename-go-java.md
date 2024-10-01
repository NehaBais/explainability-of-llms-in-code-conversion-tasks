```java
import java.io.File;

public class FileRenamer {

    public static void main(String[] args) {
        // Rename files and directories in the current working directory
        File inputFile = new File("input.txt");
        File outputFile = new File("output.txt");
        File docsDirectory = new File("docs");
        File myDocsDirectory = new File("mydocs");
        inputFile.renameTo(outputFile);
        docsDirectory.renameTo(myDocsDirectory);

        // Rename files and directories in the filesystem root
        inputFile = new File("/input.txt");
        outputFile = new File("/output.txt");
        docsDirectory = new File("/docs");
        myDocsDirectory = new File("/mydocs");
        inputFile.renameTo(outputFile);
        docsDirectory.renameTo(myDocsDirectory);
    }
}
```

