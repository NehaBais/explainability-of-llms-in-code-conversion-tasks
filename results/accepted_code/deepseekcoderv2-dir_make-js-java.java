import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Mkdirp {
  public static void mkdirp(String pathStr, Runnable onSuccess, Runnable onFailure) {
    Path path = Paths.get(pathStr);
    try {
      if (!Files.exists(path)) {
        // Create the parent directory recursively
        Files.createDirectories(path);
      }
      if (onSuccess != null) {
        onSuccess.run();
      }
    } catch (Exception e) {
      if (onFailure != null) {
        onFailure.run();
      }
    }
  }

  public static void main(String[] args) {
    String dirPath = "./path/to/dir";
    mkdirp(
        dirPath,
        () -> System.out.println("Directory created successfully."),
        () -> System.err.println("Failed to create directory."));
  }
}
