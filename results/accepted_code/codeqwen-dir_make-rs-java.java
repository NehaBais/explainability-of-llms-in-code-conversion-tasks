import java.io.File;

public class Main {
  public static void main(String[] args) {
    File dir = new File("./path/to/dir");
    if (!dir.exists()) {
      if (!dir.mkdirs()) {
        System.out.println("Failed to create directory!");
      } else {
        System.out.println("Directory created successfully.");
      }
    } else {
      System.out.println("Directory already exists.");
    }
  }
}
