```java
import java.io.File;

File inputFile = new File("input.txt");
File outputFile = new File("output.txt");
inputFile.renameTo(outputFile);

File docsDirectory = new File("docs");
File mydocsDirectory = new File("mydocs");
docsDirectory.renameTo(mydocsDirectory);

File inputFileRoot = new File(File.separator + "input.txt");
File outputFileRoot = new File(File.separator + "output.txt");
inputFileRoot.renameTo(outputFileRoot);

File docsDirectoryRoot = new File(File.separator + "docs");
File mydocsDirectoryRoot = new File(File.separator + "mydocs");
docsDirectoryRoot.renameTo(mydocsDirectoryRoot);
```

