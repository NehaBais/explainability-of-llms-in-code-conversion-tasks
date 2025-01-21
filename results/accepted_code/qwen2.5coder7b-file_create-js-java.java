import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    // Function to handle exceptions and log errors
    try {
      createFileAndDirectory("output.txt", "");
      createFileAndDirectory("/output.txt", "");

      createDirectory("docs");
      createDirectory("/docs");
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  // Method to create a file with the given path and content
  public static void createFileAndDirectory(String path, String content) throws IOException {
    Path filePath = Paths.get(path);
    Files.createDirectories(filePath.getParent()); // Ensure parent directories are created
    Files.write(filePath, content.getBytes());
  }

  // Method to create a directory with the given path
  public static void createDirectory(String path) throws IOException {
    Path dirPath = Paths.get(path);
    if (!dirPath.toFile().exists()) {
      Files.createDirectories(dirPath);
    }
  }
}
