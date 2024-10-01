import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws Exception {
    Path sourceInput = Paths.get("input.txt");
    Path targetOutput = Paths.get("output.txt");
    Files.move(sourceInput, targetOutput);

    Path sourceDocs = Paths.get("docs");
    Path targetMyDocs = Paths.get("mydocs");
    Files.move(sourceDocs, targetMyDocs);

    Files.move(Paths.get("/", "input.txt"), Paths.get("/", "output.txt"));
    Files.move(Paths.get("/", "docs"), Paths.get("/", "mydocs"));
  }
}
