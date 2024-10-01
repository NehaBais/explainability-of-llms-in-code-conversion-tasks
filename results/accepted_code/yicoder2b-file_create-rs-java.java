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
            (fpath, dirs) -> {
              try {
                if (!Files.exists(Paths.get(fpath))) {
                  Files.createFile(Paths.get(fpath));
                }
                dirs.stream()
                    .flatMap(dpth -> Stream.of(dpth, dpth.resolveSibling(dpth.getName(0) + "/")))
                    .forEach(
                        dpth -> {
                          if (!Files.exists(dpth)) {
                            try {
                              Files.createDirectories(dpth);
                            } catch (IOException e) {
                              e.printStackTrace();
                            }
                          }
                        });
              } catch (IOException e) {
                System.err.println("Error: " + e.getMessage());
                System.exit(-1);
              }
            });
  }

  private static Stream<Path> createFilesInFilesystemRoots() throws IOException {
    return Stream.of(Paths.get("/"), Paths.get(".")).flatMap(pth -> Files.walk(pth));
  }
}
