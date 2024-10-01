The equivalent Java code for the given Python script would be:

```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        File oldFile = new File("input.txt");
        File newFile = new File("output.txt");
        oldFile.renameTo(newFile);
        File oldDir = new File("docs");
        File newDir = new File("mydocs");
        oldDir.renameTo(newDir);
        oldFile = new File("/input.txt");
        newFile = new File("/output.txt");
        oldFile.renameTo(newFile);
        oldDir = new File("/docs");
        newDir = new File("/mydocs");
        oldDir.renameTo(newDir);
    }
}
```