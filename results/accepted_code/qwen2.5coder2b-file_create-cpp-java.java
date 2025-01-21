import java.io.FileOutputStream;
import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException {
    // Create file "output.txt" of size 0 bytes and an empty directory "docs"
    createFile("output.txt");
    createDirectory("docs");

    // Create the same directories again in different places
    createFile("/output.txt");
    createDirectory("/docs");
  }

  public static void createFile(String fileName) throws IOException {
    try (FileOutputStream fos = new FileOutputStream(fileName)) {
      fos.write(new byte[0]);
    }
  }

  public static void createDirectory(String directoryName) throws IOException {
    java.nio.file.Files.createDirectories(java.nio.file.Paths.get(directoryName));
  }
}
