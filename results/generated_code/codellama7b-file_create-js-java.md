
Here's the converted code in Java:
```java
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        File outputFile = new File("output.txt");
        outputFile.createNewFile();

        File rootOutputFile = new File("/output.txt");
        rootOutputFile.createNewFile();

        File docDirectory = new File("docs");
        docDirectory.mkdirs();

        File rootDocDirectory = new File("/docs");
        rootDocDirectory.mkdirs();
    }
}
```
Note that in Java, we can't use the `require` function to import modules like we do in JavaScript. Instead, we use the `import` statement at the top of the file to import the necessary packages.

Also note that in Java, we don't have a direct equivalent to JavaScript's `console.log` function. Instead, we can use the `System.out.println()` method to print to the console.
