Java code:
```java
import java.io.IOException;
import java.nio.file.FileStore;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) throws IOException {
        List<String> files = new ArrayList<>();
        files.add("input.txt");
        files.add("docs");
        files.add("/input.txt");
        files.add("/docs");

        for (int i=0;i<files.size();i++) {
            Path p = FileSystems.getDefault().getPath(files.get(i));
            try {
                if (Files.exists(p) && Files.isDirectory(p)) {
                    System.out.println("'" + files.get(i) + "' is a directory");
                } else if (!Files.exists(p)){
                    System.out.println("'" + files.get(i) + "' does not exist");
                } else {
                    System.out.println("'" + files.get(i) + "' is a file");
                }
            } catch (IOException e) {
                System.err.println("Could not check status of '" + files.get(i) + "': " + e);
            }
        }
    }
}
```
