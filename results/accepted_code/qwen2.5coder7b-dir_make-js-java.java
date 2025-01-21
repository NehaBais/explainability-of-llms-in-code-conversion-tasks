import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException {
    String path = "./path/to/dir";
    mkdirp(path);
  }

  public static void mkdirp(String p) throws IOException {
    File file = new File(p);

    if (file.exists()) {
      return;
    }

    // Get parent directory
    File parentDir = file.getParentFile();

    if (parentDir != null && !parentDir.exists()) {
      mkdirp(parentDir.getPath());
    }

    if (!file.mkdir()) {
      throw new IOException("Failed to create directory " + p);
    }
  }
}
