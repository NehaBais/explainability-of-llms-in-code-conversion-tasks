import static java.nio.file.LinkOption.NOFOLLOW_LINKS;

import java.nio.file.*;

public class Main {
  public static void mkdirp(String path) throws java.io.IOException {
    Path dir = Paths.get(path);
    if (!Files.exists(dir, NOFOLLOW_LINKS)) {
      Files.createDirectories(dir);
    }
  }

  public static void main(String[] args) throws java.io.IOException {
    mkdirp("./path/to/dir"); // pass your path here
  }
}
