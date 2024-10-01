import java.io.File;
import java.io.IOException;

public class FileCreator {
  public static void main(String[] args) {
    create("."); // current directory
    create("/"); // root directory
  }

  public static void create(String directory) {
    File file = new File(directory + "/output.txt");
    try {
      file.createNewFile();
    } catch (IOException e) {
      System.out.println("Error creating file: " + e.getMessage());
    }
    File dir = new File(directory + "/docs");
    dir.mkdirs();
  }
}
