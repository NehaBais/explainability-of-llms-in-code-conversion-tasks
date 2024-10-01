import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws Exception {
    Path source = Paths.get("input.txt");
    Path target = Paths.get("output.txt");
    Files.move(source, target, StandardCopyOption.REPLACE_EXISTING);

    source = Paths.get("docs");
    target = Paths.get("mydocs");
    Files.move(source, target, StandardCopyOption.REPLACE_EXISTING);

    // For root level
    source = Paths.get("/input.txt");
    target = Paths.get("/output.txt");
    Files.move(source, target, StandardCopyOption.REPLACE_EXISTING);

    source = Paths.get("/docs");
    target = Paths.get("/mydocs");
    Files.move(source, target, StandardCopyOption.REPLACE_EXISTING);
  }
}
