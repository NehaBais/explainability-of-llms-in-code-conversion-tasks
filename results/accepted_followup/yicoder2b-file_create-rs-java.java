import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.stream.Stream;

public class Main {
  private static final String FILE_NAME = "output.txt";
  private static final String DIR_NAME = "docs";

  public static void main(String[] args) throws IOException {
    createFilesInFilesystemRoots()
        .forEach(
            pth -> {
              try {
                if (!Files.exists(pth)) {
                  try {
                    if (pth.equals(Paths.get(DIR_NAME))) {
                      Files.createDirectories(pth);
                    } else if (pth.equals(Paths.get(FILE_NAME))) {
                      Files.createFile(pth);
                    }
                  } catch (IOException e) {
                    System.err.println("Error: " + e.getMessage());
                    System.exit(-1);
                  }
                }
              } catch (Exception e) {
                e.printStackTrace();
              }
            });
  }

  private static Stream<Path> createFilesInFilesystemRoots() throws IOException {
    return Stream.of(Paths.get("/"), Paths.get(".")).flatMap(pth -> Files.walk(pth));
  }
}
