import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class CreateDirectory {

  public static void main(String[] args) {
    if (args.length != 1) {
      System.out.println("usage: mkdir <path>");
      return;
    }

    String pathToCreate = args[0];
    Path directoryPath = Paths.get(pathToCreate);

    try {
      if (Files.exists(directoryPath)) {
        return;
      }

      if (Files.createDirectories(directoryPath).equals(directoryPath)) {
        System.out.println("Directory created successfully: " + pathToCreate);
      } else {
        System.out.println("Failed to create directory: " + pathToCreate);
      }
    } catch (Exception e) {
      System.out.println(
          "Error creating directory: " + pathToCreate + ". Reason: " + e.getMessage());
    }
  }
}
