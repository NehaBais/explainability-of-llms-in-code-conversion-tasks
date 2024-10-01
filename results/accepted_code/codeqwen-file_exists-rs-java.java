import java.io.File;

public class Main {

  public static void main(String[] args) {
    for (String file : new String[] {"input.txt", "docs", "/input.txt", "/docs"}) {
      File f = new File(file);
      if (f.exists()) {
        if (f.isDirectory()) {
          System.out.println(file + " is a directory");
        } else {
          System.out.println(file + " Is a file");
        }
      } else {
        System.out.println(file + " does not exist");
      }
    }
  }
}
