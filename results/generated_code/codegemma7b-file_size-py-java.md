```java
import java.io.File;

File inputFile1 = new File("input.txt");
long size1 = inputFile1.length();

File inputFile2 = new File("/");
File inputFile3 = new File(inputFile2, "input.txt");
long size2 = inputFile3.length();
```
