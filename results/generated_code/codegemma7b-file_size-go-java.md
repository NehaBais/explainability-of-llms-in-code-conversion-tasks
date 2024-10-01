```java
import java.io.File;
import java.io.IOException;

public class FileSizeChecker {

    public static void main(String[] args) {
        try {
            File inputTxt = new File("input.txt");
            File rootInputTxt = new File("/");
            File rootInputTxtFile = new File(rootInputTxt, "input.txt");

            System.out.println(inputTxt.length());
            System.out.println(rootInputTxtFile.length());
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```

