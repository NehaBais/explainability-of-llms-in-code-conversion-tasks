import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    // Create an empty file called "output.txt" of size 0 bytes and an empty directory called
    // "docs".

    FileOutputStream outputStream = new FileOutputStream("output.txt");
    outputStream.close();

    File file = new File("/output.txt");
    file.createNewFile();

    File docsDir = new File("docs");
    docsDir.mkdir();

    File rootDir = new File("/docs");
    rootDir.mkdir();
  }
}
