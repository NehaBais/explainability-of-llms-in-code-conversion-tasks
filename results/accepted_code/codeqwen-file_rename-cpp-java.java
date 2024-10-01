import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    try {
      // "here"
      Path source1 = Paths.get("input.txt");
      Path target1 = Paths.get("output.txt");
      Files.move(source1, target1, StandardCopyOption.REPLACE_EXISTING);

      Path source2 = Paths.get("docs");
      Path target2 = Paths.get("mydocs");
      Files.move(source2, target2, StandardCopyOption.REPLACE_EXISTING);

      // "/" (filesystem root)
      source1 = Paths.get("/input.txt");
      target1 = Paths.get("/output.txt");
      Files.move(source1, target1, StandardCopyOption.REPLACE_EXISTING);

      source2 = Paths.get("/docs");
      target2 = Paths.get("/mydocs");
      Files.move(source2, target2, StandardCopyOption.REPLACE_EXISTING);
    } catch (IOException e) {
      System.err.println("Error occurred while renaming/moving the files: " + e.getMessage());
    }
  }
}
