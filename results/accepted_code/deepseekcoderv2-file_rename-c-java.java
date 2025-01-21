import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.file.StandardCopyOption;

public class RenameExample {
  public static void main(String[] args) {
    try {
      // Rename file in the current working directory
      Files.move(
          Paths.get("input.txt"), Paths.get("output.txt"), StandardCopyOption.REPLACE_EXISTING);

      // Rename directory in the current working directory
      Files.move(Paths.get("docs"), Paths.get("mydocs"), StandardCopyOption.REPLACE_EXISTING);

      // Rename file in the filesystem root
      Files.move(
          Paths.get("/input.txt"), Paths.get("/output.txt"), StandardCopyOption.REPLACE_EXISTING);

      // Rename directory in the filesystem root
      Files.move(Paths.get("/docs"), Paths.get("/mydocs"), StandardCopyOption.REPLACE_EXISTING);
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
