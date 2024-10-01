### Answer

```java
import java.io.*;
public class Rename {
    public static void main(String[] args) {
        File oldFile = new File("input.txt");
        File newFile = new File("output.txt");
        boolean result = oldFile.renameTo(newFile);
        if (result == true){
            System.out.println("The file has been successfully renamed.");
        } else {
            System.out.println("Failed to rename the file.");
        }
    }
}
```

