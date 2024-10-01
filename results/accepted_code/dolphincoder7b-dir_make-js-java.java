import java.io.*;
import java.nio.file.*;
import java.util.*;

public class MkdirP {

  public static void mkdirp(String path) throws IOException {
    path = new File(path).getAbsolutePath();

    String dirPath = path;
    String parentPath = null;

    // Ensure parent directory exists, if needed.
    while ((parentPath = new File(dirPath).getParent()) != null
        && !new File(parentPath).exists()
        && !new File(parentPath).mkdirs()) {
      throw new IOException("Failed to create parent directories.");
    }
  }

  public static void main(String[] args) throws IOException {
    mkdirp("/path/to/dir");
  }
}
