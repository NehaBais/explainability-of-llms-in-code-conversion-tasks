import java.io.IOException;
import java.nio.file.FileAlreadyExistsException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Mkdirp {

  public static void mkdirp(String pathStr) throws IOException {
    Path path = Paths.get(pathStr).normalize();

    try {
      Files.createDirectories(path);
    } catch (FileAlreadyExistsException e) {
      // The directory already exists, no action needed.
    } catch (IOException e) {
      // Handle other I/O errors
      throw new IOException("Error creating directory: " + pathStr, e);
    }
  }

  public static void main(String[] args) {
    try {
      mkdirp("./path/to/dir");
      System.out.println("Directory created successfully.");
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
