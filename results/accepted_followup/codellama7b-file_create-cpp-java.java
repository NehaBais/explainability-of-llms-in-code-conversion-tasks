import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Create empty file output.txt
    File f = new File("output.txt");
    if (!f.exists()) {
      try {
        f.createNewFile();
      } catch (Exception e) {
        System.out.println("Error creating file: " + e);
      }
    }

    // Create empty directory docs
    File dir = new File("docs");
    if (!dir.exists()) {
      try {
        dir.mkdir();
      } catch (Exception e) {
        System.out.println("Error creating directory: " + e);
      }
    }
  }
}
