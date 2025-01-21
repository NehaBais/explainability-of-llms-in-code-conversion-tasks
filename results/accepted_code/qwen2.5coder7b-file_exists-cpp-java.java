import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class FileDirectoryCheck {

  public static void fileExists(String path) {
    Path filePath = Paths.get(path);
    System.out.println(path);

    if (Files.exists(filePath)) {
      if (Files.isDirectory(filePath)) {
        System.out.println(" is a directory");
      } else {
        try {
          long fileSize = Files.size(filePath);
          System.out.println(" exists with a file size of " + fileSize + " bytes.");
        } catch (IOException e) {
          System.err.println("Could not determine the file size: " + e.getMessage());
        }
      }
    } else {
      System.out.println(" does not exist");
    }
  }

  public static void main(String[] args) {
    fileExists("./input.txt"); // Relative path for current working directory
    fileExists("/root/input.txt"); // Absolute path for filesystem root

    fileExists("./docs/input.txt"); // Relative path for current working directory
    fileExists("/root/docs/input.txt"); // Absolute path for filesystem root
  }
}
