```java
import java.io.File;

// Current working directory
File inputFile = new File("input.txt");
File docsDirectory = new File("docs");

if (inputFile.isFile() && docsDirectory.isDirectory()) {
    // Files and directory exist
} else {
    // Files and directory do not exist
}

// Filesystem root
File rootInputFile = new File("/input.txt");
File rootDocsDirectory = new File("/docs");

if (rootInputFile.isFile() && rootDocsDirectory.isDirectory()) {
    // Files and directory exist
} else {
    // Files and directory do not exist
}
```
