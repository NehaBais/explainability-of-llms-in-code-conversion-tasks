import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws Exception {
    // Here
    Files.move(
        Paths.get("input.txt"), Paths.get("output.txt"), StandardCopyOption.REPLACE_EXISTING);
    Files.move(
        Paths.get("/c:/input.txt"),
        Paths.get("/c:/output.txt"),
        StandardCopyOption.REPLACE_EXISTING);

    // In root
    Files.move(
        Paths.get("/input.txt"), Paths.get("/output.txt"), StandardCopyOption.REPLACE_EXISTING);
    Files.move(Paths.get("/docs"), Paths.get("/mydocs"));
  }
}
