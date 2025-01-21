import java.io.File;

public class Main {

  public static void main(String[] args) {
    String[] paths = {"input.txt", "docs", "/input.txt", "/docs"};

    for (String path : paths) {
      File file = new File(path);

      if (file.exists()) {
        if (file.isDirectory()) {
          System.out.println(path + " is a directory");
        } else {
          System.out.println(path + " is a file");
        }
      } else {
        System.out.println(path + " does not exist");
      }
    }
  }
}
