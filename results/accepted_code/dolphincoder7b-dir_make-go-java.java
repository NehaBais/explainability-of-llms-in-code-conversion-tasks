import java.io.File;

public class mkdirp {
  public static void main(String[] args) {
    File dir = new File("/tmp/some/path/to/dir");
    if (!dir.exists()) {
      try {
        if (dir.mkdirs()) {
          System.out.println("Directories are created!");
        } else {
          System.out.println("Failed to create directories!");
        }
      } catch (Exception e) { // Handle Exception If any
        e.printStackTrace();
      }
    }
  }
}
