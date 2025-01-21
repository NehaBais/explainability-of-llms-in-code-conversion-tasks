import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    Path sourcePath = null;
    Path targetPath = null;

    try {
      // Rename file "input.txt" to "output.txt" in the current directory
      sourcePath = Paths.get("./input.txt");
      targetPath = Paths.get("./output.txt");
      Files.move(sourcePath, targetPath, StandardCopyOption.REPLACE_EXISTING);

      // Rename dir "docs" to "mydocs" in the current directory
      sourcePath = Paths.get("./docs");
      targetPath = Paths.get("./mydocs");
      Files.move(sourcePath, targetPath, StandardCopyOption.REPLACE_EXISTING);

      // Rename file "input.txt" to "output.txt" in the root directory
      sourcePath = Paths.get("/input.txt");
      targetPath = Paths.get("/output.txt");
      Files.move(sourcePath, targetPath, StandardCopyOption.REPLACE_EXISTING);

      // Rename dir "docs" to "mydocs" in the root directory
      sourcePath = Paths.get("/docs");
      targetPath = Paths.get("/mydocs");
      Files.move(sourcePath, targetPath, StandardCopyOption.REPLACE_EXISTING);
    } catch (IOException e) {
      System.out.println("An error occurred while trying to move files.");
    }
  }
}
