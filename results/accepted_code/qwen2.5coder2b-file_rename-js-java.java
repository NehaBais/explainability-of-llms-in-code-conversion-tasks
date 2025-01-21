import java.io.File;
import java.nio.file.Files;

public class FileMover {

  public static void moveFile(String sourcePath, String destinationPath) {
    try {
      Files.move(new File(sourcePath).toPath(), new File(destinationPath).toPath());
      System.out.println("Successfully moved file: " + sourcePath);
    } catch (Exception e) {
      e.printStackTrace();
    }
  }

  public static void moveFolder(String sourcePath, String destinationPath) {
    try {
      Files.move(new File(sourcePath).toPath(), new File(destinationPath).toPath());
      System.out.println("Successfully moved folder: " + sourcePath);
    } catch (Exception e) {
      e.printStackTrace();
    }
  }

  public static void main(String[] args) {
    moveFile("input.txt", "output.txt");
    moveFile("/c:/input.txt", "/c:/output.txt");
    moveFolder("docs", "mydocs");
    moveFolder("/c:/docs", "/c:/mydocs");
  }
}
