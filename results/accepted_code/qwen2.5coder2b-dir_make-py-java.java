import java.io.File;

public class Main {
  public static void main(String[] args) {
    String path = "./path/to/dir";
    try {
      File file = new File(path);
      if (!file.exists()) {
        if (!file.mkdirs()) { // Creates the directory and any missing parent directories.
          throw new Exception("Directory could not be created.");
        }
      }
    } catch (Exception e) {
      System.out.println(e.getMessage());
    }
  }
}
