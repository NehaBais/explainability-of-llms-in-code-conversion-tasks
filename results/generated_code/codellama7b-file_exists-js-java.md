To convert this code from JavaScript to Java, you can use the following approaches:

1. Use the Apache Commons IO library: 
```java
import org.apache.commons.io.FileUtils;
import org.apache.commons.io.FilenameUtils;
import java.io.*;

public class FileExists {
    public static void main(String[] args) throws IOException {
        String inputFilePath = "input.txt";
        String rootInputFilePath = "c:/input.txt";
        String docsDirectoryPath = "docs";
        String rootDocsDirectoryPath = "c:/docs";

        // Check if the file exists in the current working directory
        File inputFile = new File(inputFilePath);
        boolean isInputFileExists = inputFile.exists();
        System.out.println("Is input.txt file exist: " + isInputFileExists);

        // Check if the file exists in the root of the C drive
        File rootInputFile = new File(rootInputFilePath);
        boolean isRootInputFileExists = rootInputFile.exists();
        System.out.println("Is c:/input.txt file exist: " + isRootInputFileExists);

        // Check if the directory exists in the current working directory
        File docsDirectory = new File(docsDirectoryPath);
        boolean isDocsDirectoryExists = docsDirectory.exists();
        System.out.println("Is docs directory exist: " + isDocsDirectoryExists);

        // Check if the directory exists in the root of the C drive
        File rootDocsDirectory = new File(rootDocsDirectoryPath);
        boolean isRootDocsDirectoryExists = rootDocsDirectory.exists();
        System.out.println("Is c:/docs directory exist: " + isRootDocsDirectoryExists);
    }
}
```
2. Use the Java NIO (Non-Blocking I/O) File API:

import java.nio.file.Paths;
import java.nio.file.Files;
import java.io.IOException;

public class FileExists {
    public static void main(String[] args) throws IOException {
        String inputFilePath = "input.txt";
        String rootInputFilePath = "c:/input.txt";
        String docsDirectoryPath = "docs";
        String rootDocsDirectoryPath = "c:/docs";

        // Check if the file exists in the current working directory
        boolean isInputFileExists = Files.exists(Paths.get(inputFilePath));
        System.out.println("Is input.txt file exist: " + isInputFileExists);

        // Check if the file exists in the root of the C drive
        boolean isRootInputFileExists = Files.exists(Paths.get(rootInputFilePath));
        System.out.println("Is c:/input.txt file exist: " + isRootInputFileExists);

        // Check if the directory exists in the current working directory
        boolean isDocsDirectoryExists = Files.isDirectory(Paths.get(docsDirectoryPath));
        System.out.println("Is docs directory exist: " + isDocsDirectoryExists);

        // Check if the directory exists in the root of the C drive
        boolean isRootDocsDirectoryExists = Files.isDirectory(Paths.get(rootDocsDirectoryPath));
        System.out.println("Is c:/docs directory exist: " + isRootDocsDirectoryExists);
    }
}

3. Use the Java 7 NIO.2 File API:

import java.nio.file.Files;
import java.io.IOException;
import java.nio.file.Paths;

public class FileExists {
    public static void main(String[] args) throws IOException {
        String inputFilePath = "input.txt";
        String rootInputFilePath = "c:/input.txt";
        String docsDirectoryPath = "docs";
        String rootDocsDirectoryPath = "c:/docs";

        // Check if the file exists in the current working directory
        boolean isInputFileExists = Files.exists(Paths.get(inputFilePath));
        System.out.println("Is input.txt file exist: " + isInputFileExists);

        // Check if the file exists in the root of the C drive
        boolean isRootInputFileExists = Files.exists(Paths.get(rootInputFilePath));
        System.out.println("Is c:/input.txt file exist: " + isRootInputFileExists);

        // Check if the directory exists in the current working directory
        boolean isDocsDirectoryExists = Files.isDirectory(Paths.get(docsDirectoryPath));
        System.out.println("Is docs directory exist: " + isDocsDirectoryExists);

        // Check if the directory exists in the root of the C drive
        boolean isRootDocsDirectoryExists = Files.isDirectory(Paths.get(rootDocsDirectoryPath));
        System.out.println("Is c:/docs directory exist: " + isRootDocsDirectoryExists);
    }
}

4. Use the Java 8 NIO.2 File API:

import java.nio.file.Files;
import java.io.IOException;
import java.nio.file.Paths;

public class FileExists {
    public static void main(String[] args) throws IOException {
        String inputFilePath = "input.txt";
        String rootInputFilePath = "c:/input.txt";
        String docsDirectoryPath = "docs";
        String rootDocsDirectoryPath = "c:/docs";

        // Check if the file exists in the current working directory
        boolean isInputFileExists = Files.exists(Paths.get(inputFilePath));
        System.out.println("Is input.txt file exist: " + isInputFileExists);

        // Check if the file exists in the root of the C drive
        boolean isRootInputFileExists = Files.exists(Paths.get(rootInputFilePath));
        System.out.println("Is c:/input.txt file exist: " + isRootInputFileExists);

        // Check if the directory exists in the current working directory
        boolean isDocsDirectoryExists = Files.isDirectory(Paths.get(docsDirectoryPath));
        System.out.println("Is docs directory exist: " + isDocsDirectoryExists);

        // Check if the directory exists in the root of the C drive
        boolean isRootDocsDirectoryExists = Files.isDirectory(Paths.get(rootDocsDirectoryPath));
        System.out.println("Is c:/docs directory exist: " + isRootDocsDirectoryExists);
    }
}
