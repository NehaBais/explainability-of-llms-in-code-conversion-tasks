import java.io.File;

public class MkdirP {
  public static void main(String[] args) {
    String path = args[0];
    File file = new File(path);

    // Create all nonexistent parent directories along the path.
    if (!file.exists()) {
      file.mkdirs();
    }
  }
}
