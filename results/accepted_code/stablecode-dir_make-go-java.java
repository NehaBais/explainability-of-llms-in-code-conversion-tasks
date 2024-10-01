import java.io.File;

public class Main {
  public static void main(String[] args) {
    String path = "/tmp/some/path/to/dir";
    File file = new File(path);

    boolean createdDirectories = file.mkdirs();

    if (createdDirectories) {
      System.out.println("Directory created.");
    } else {
      System.out.println("Directory already exists or an error occurred.");
    }
  }
}
