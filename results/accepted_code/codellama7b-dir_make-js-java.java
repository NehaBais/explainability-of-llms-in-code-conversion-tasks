import java.io.File;
import java.io.IOException;

public class Mkdirp {
  public static void mkdirp(String path) throws IOException {
    File file = new File(path);
    if (!file.exists()) {
      // The directory doesn't exist. Make its parent and try again.
      mkdirp(file.getParent());
      file.mkdir();
    } else if (file.isDirectory()) {
      // Do nothing if the directory already exists.
      return;
    } else {
      throw new IOException("The path is not a directory.");
    }
  }

  private static void mkdirp(File file) throws IOException {
    if (!file.exists()) {
      mkdirp(file.getParent());
      file.mkdir();
    } else if (file.isDirectory()) {
      // Do nothing if the directory already exists.
      return;
    } else {
      throw new IOException("The path is not a directory.");
    }
  }
}
