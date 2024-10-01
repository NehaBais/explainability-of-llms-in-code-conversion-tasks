import java.io.File;
import java.io.IOException;

public class Mkdirp {

  public static void mkdirp(String dirPath) throws IOException {
    File file = new File(dirPath);
    if (file.exists()) {
      return; // Directory already exists, no need to create it
    }
    mkdirp(file.getParent()); // Recursively call mkdirp on the parent directory
    file.mkdir(); // Create the directory itself
  }

  public static void main(String[] args) throws IOException {
    String dirPath = "./path/to/dir";
    mkdirp(dirPath); // This will create the directory and any missing parents
  }
}
