import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  private static final String FILE_NAME = "output.txt";
  private static final String DIR_NAME = "docs";

  public static void main(String[] args) {
    createFileAndDirectory(".", System.getProperty("user.dir"));
    createFileAndDirectory("/", "/");
  }

  private static void createFileAndDirectory(String root, String path) {
    try {
      Path rootPath = Paths.get(root);
      Path filePath = rootPath.resolve(FILE_NAME);
      Path dirPath = rootPath.resolve(DIR_NAME);

      if (Files.notExists(dirPath)) {
        Files.createDirectories(dirPath);
      }

      if (Files.notExists(filePath)) {
        Files.createFile(filePath);
      }
    } catch (IOException e) {
      System.err.println("Error: " + e.getMessage());
      System.exit(1);
    }
  }
}
