Below is the equivalent Java code for your Go code:

```java
import java.io.File;
import java.io.IOException;

public class Main {

    public static void printStat(String path) {
        File file = new File(path);
        try {
            if (file.exists()) {
                if (file.isDirectory())) {
                    System.out.println(path + " is a directory");
                } else {
                    System.out.println(path + " is a file");
                }
            } else {
                System.out.println(path + " does not exist");
            }
        } catch (SecurityException | IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        printStat("input.txt");
        printStat("/input.txt");
        printStat("docs");
        printStat("/docs");
      }
}
```
This Java code does the same thing as your Go code: it checks whether a file called `input.txt` and a directory called `docs` exist in both the current working directory and also in the filesystem root.
