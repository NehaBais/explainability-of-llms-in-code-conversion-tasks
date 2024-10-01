import java.io.File;

public class Main {

  public static void main(String[] args) {
    createDir("./path/to/dir");
  }

  public static void createDir(String path) {
    File dir = new File(path);
    if (!dir.exists()) {
      if (dir.mkdirs()) {
        System.out.println("Directory created successfully");
      } else {
        System.out.println("Failed to create directory");
      }
    } else {
      System.out.println("Directory already exists");
    }
  }
}
