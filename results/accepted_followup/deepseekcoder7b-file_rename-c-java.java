import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    try {
      // Rename in the current directory (relative path)
      Files.move(
          Paths.get("input.txt"), Paths.get("output.txt"), StandardCopyOption.REPLACE_EXISTING);
      Files.move(Paths.get("docs"), Paths.get("mydocs"), StandardCopyOption.REPLACE_EXISTING);

      // Rename in the filesystem root (absolute path)
      Files.move(
          Paths.get("/input.txt"), Paths.get("/output.txt"), StandardCopyOption.REPLACE_EXISTING);
      Files.move(Paths.get("/docs"), Paths.get("/mydocs"), StandardCopyOption.REPLACE_EXISTING);
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
