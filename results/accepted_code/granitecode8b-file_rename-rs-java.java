import java.io.IOException;
import java.nio.file.*;
import java.nio.file.attribute.BasicFileAttributes;

public class FileMove {
  public static void main(String[] args) {
    String inputPath = "input.txt";
    String outputPath = "output.txt";
    String docsPath = "docs";
    String mydocsPath = "mydocs";
    try {
      Files.move(Paths.get(inputPath), Paths.get(outputPath), StandardCopyOption.REPLACE_EXISTING);
      Files.move(Paths.get(docsPath), Paths.get(mydocsPath), StandardCopyOption.REPLACE_EXISTING);
      Path root = Paths.get("/");
      Files.walkFileTree(
          root,
          new SimpleFileVisitor<Path>() {
            @Override
            public FileVisitResult preVisitDirectory(Path dir, BasicFileAttributes attrs)
                throws IOException {
              if (dir.toString().contains("input.txt")) {
                Files.move(
                    dir,
                    Paths.get(dir.toString().replace("input.txt", "output.txt")),
                    StandardCopyOption.REPLACE_EXISTING);
              } else if (dir.toString().contains("docs")) {
                Files.move(
                    dir,
                    Paths.get(dir.toString().replace("docs", "mydocs")),
                    StandardCopyOption.REPLACE_EXISTING);
              }
              return FileVisitResult.CONTINUE;
            }
          });
    } catch (IOException e) {
      System.out.println("File move error: " + e.getMessage());
    }
  }
}
