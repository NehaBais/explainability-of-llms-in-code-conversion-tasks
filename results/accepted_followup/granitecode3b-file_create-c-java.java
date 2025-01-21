import java.io.File;
import java.io.IOException;

public class FileCreator {
  public static void main(String[] args) {
    // Create an empty file called "output.txt" in the current working directory
    try {
      java.nio.file.Files.createFile(new File("output.txt").toPath());
    } catch (IOException e) {
      System.err.println("Error creating output.txt: " + e);
    }

    // Create an empty directory called "docs" in the filesystem root
    try {
      java.nio.file.Files.createDirectory(new File("/docs").toPath());
    } catch (IOException e) {
      System.err.println("Error creating /docs: " + e);
    }
  }
}
