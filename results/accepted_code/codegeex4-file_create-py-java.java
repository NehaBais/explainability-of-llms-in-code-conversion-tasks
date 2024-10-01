import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    String currentPath = System.getProperty("user.dir");
    String rootPath = "/"; // the filesystem root directory

    create(currentPath); // Current working directory
    create(rootPath); // Root directory
  }

  private static void create(String path) {
    try {
      Path outputFilePath = Paths.get(path, "output.txt");
      Files.createFile(outputFilePath);

      Path docsDirPath = Paths.get(path, "docs");
      Files.createDirectory(docsDirPath);
    } catch (Exception e) {
      System.out.println("An error occurred: " + e.getMessage());
    }
  }
}
