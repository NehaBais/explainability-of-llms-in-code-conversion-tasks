import java.io.File;
import java.io.IOException;
import java.nio.file.Files;

public class Main {
  public static void main(String[] args) {
    mkdirs("/tmp/some/path/to/dir");
  }

  private static void mkdirs(String dirName) {
    File dir = new File(dirName);
    if (!dir.exists()) {
      if (!dir.mkdirs()) {
        System.out.println("Failed to create directory " + dir.getAbsolutePath());
      } else {
        // If the parent directories are created successfully, then we use chmod with the required
        // permission
        try {
          if (!Files.setPermissions(
              dir.toURI(),
              new java.nio.file.AttributeView[] {},
              java.nio.file.LinkOption.NOFOLLOW_LINKS)) {
            System.out.println("Failed to set permissions on " + dir.getAbsolutePath());
          } else {
            // if the permission is set successfully then print success message
            System.out.println("Directory created and permissions set successfully!");
          }
        } catch (IOException e) {
          e.printStackTrace();
        }
      }
    } else {
      System.out.println(dir.getAbsolutePath() + " already exists.");
    }
  }
}
