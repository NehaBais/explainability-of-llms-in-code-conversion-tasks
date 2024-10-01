This is a Java version of the Python code you provided:
```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        File inputTxt = new File("input.txt");
        if (inputTxt.exists()) {
            File outputTxt = new File("output.txt");
            if (!outputTxt.exists()) {
                inputTxt.renameTo(outputTxt);
            }

            File docsDir = new File("docs");
            if (docsDir.exists() && !docsDir.isDirectory()) {
                throw new IOException("The 'docs' file is not a directory");
            } else if (docsDir.exists() && docsDir.isDirectory()) {
                File myDocsDir = new File("mydocs");
                if (!myDocsDir.exists()) {
                    docsDir.renameTo(myDocsDir);
                }
            }
        }

        File rootInputTxt = new File(File.separator + "input.txt");
        if (rootInputTxt.exists()) {
            File rootOutputTxt = new File(File.separator + "output.txt");
            if (!rootOutputTxt.exists()) {
                rootInputTxt.renameTo(rootOutputTxt);
            }

            File rootDocsDir = new File(File.separator + "docs");
            if (rootDocsDir.exists() && !rootDocsDir.isDirectory()) {
                throw new IOException("The 'docs' file is not a directory");
            } else if (rootDocsDir.exists() && rootDocsDir.isDirectory()) {
                File rootMyDocsDir = new File(File.separator + "mydocs");
                if (!rootMyDocsDir.exists()) {
                    rootDocsDir.renameTo(rootMyDocsDir);
                }
            }
        }
    }
}
```
The Java version uses `java.io.File` to handle files and directories instead of the `os` module in Python, which is mostly applicable only for UNIX-like operating systems (and Linux). The code performs checks on whether the target files or directories exist before renaming them.
