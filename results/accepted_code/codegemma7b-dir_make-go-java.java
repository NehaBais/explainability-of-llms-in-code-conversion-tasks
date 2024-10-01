import java.io.File;

public class MkdirAll {

  public static void mkdirAll(String path) {
    File directory = new File(path);
    if (!directory.exists()) {
      directory.mkdirs();
    }
  }

  public static void main(String[] args) {
    String path = "/tmp/some/path/to/dir";
    mkdirAll(path);
  }
}
