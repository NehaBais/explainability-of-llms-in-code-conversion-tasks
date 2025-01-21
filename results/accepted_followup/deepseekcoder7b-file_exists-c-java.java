import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    System.out.println(
        "input.txt is a regular file? " + Files.isRegularFile(Paths.get("input.txt")));
    System.out.println(
        "docs is a directory? " + Files.exists(Paths.get("docs"), LinkOption.NOFOLLOW_LINKS));
    System.out.println(
        "/input.txt is a regular file? " + Files.isRegularFile(Paths.get("/input.txt")));
    System.out.println(
        "/docs is a directory? " + Files.exists(Paths.get("/docs"), LinkOption.NOFOLLOW_LINKS));
  }
}
