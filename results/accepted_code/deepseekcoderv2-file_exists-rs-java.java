import java.io.File;

public class Main {
  public static void main(String[] args) {
    String[] files = {"input.txt", "docs", "/input.txt", "/docs"};

    for (String file : files) {
      File f = new File(file);
      if (f.exists()) {
        if (f.isDirectory()) {
          System.out.println(file + " is a directory");
        } else {
          System.out.println(file + " is a file");
        }
      } else {
        System.out.println(file + " does not exist");
      }
    }
  }
}
