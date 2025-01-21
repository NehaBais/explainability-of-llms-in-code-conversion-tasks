import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.StandardOpenOption;

public class CreateFilesAndDirectory {
  public static void main(String[] args) {
    try {
      // Creating file in the current working directory
      Path filePath = Paths.get("output.txt");
      Files.write(
          filePath, new byte[0], StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING);

      // Creating directory in the current working directory
      File dirFile = new File("docs");
      if (dirFile.mkdir()) {
        System.out.println("Directory created: " + dirFile.getAbsolutePath());
      } else {
        System.err.println("Failed to create directory.");
      }

      // Creating file in the filesystem root (if running with appropriate privileges)
      filePath = Paths.get("/output.txt");
      Files.write(
          filePath, new byte[0], StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING);

      // Creating directory in the filesystem root (if running with appropriate privileges)
      dirFile = new File("/docs");
      if (dirFile.mkdir()) {
        System.out.println("Directory created: " + dirFile.getAbsolutePath());
      } else {
        System.err.println("Failed to create directory.");
      }
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
