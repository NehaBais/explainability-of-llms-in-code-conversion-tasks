```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        File file = new File("output.txt");
        file.createNewFile();

        File rootFile = new File("/output.txt");
        rootFile.createNewFile();

        File docsDir = new File("docs");
        docsDir.mkdir();

        File rootDocsDir = new File("/docs");
        rootDocsDir.mkdir();
    }
}
```
