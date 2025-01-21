import java.io.File;

public class MkdirAll {
  public static void mkdirs(String path) {
    File file = new File(path);
    if (!file.exists()) {
      boolean created = file.mkdirs();
      if (created) {
        System.out.println("Directory created successfully.");
      } else {
        System.err.println("Failed to create directory.");
      }
    } else {
      System.out.println("Directory already exists.");
    }
  }

  public static void main(String[] args) {
    String path = "/tmp/some/path/to/dir";
    mkdirs(path);
  }
}
