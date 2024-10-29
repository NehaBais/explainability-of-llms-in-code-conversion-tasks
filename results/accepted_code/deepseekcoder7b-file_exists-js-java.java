import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    Path currentDir = Paths.get(""); // get the current working directory
    checkFileAndDirectoryExists(currentDir);

    Path rootDir = Paths.get("/"); // get the filesystem root directory
    checkFileAndDirectoryExists(rootDir);
  }

  public static void checkFileAndDirectoryExists(Path path) {
    boolean exists = Files.exists(path, LinkOption.NOFOLLOW_LINKS);

    if (exists) {
      System.out.println(path + " exists");
    } else {
      System.err.println(path + " does not exist");
    }
  }
}
