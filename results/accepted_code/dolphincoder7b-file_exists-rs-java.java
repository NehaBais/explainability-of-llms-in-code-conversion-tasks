import java.io.File;

public class Main {
  public static void main(String[] args) {
    for (String file : new String[] {"input.txt", "docs", "/input.txt", "/docs"}) {
      if (new File(file).exists()) {
        if (new File(file).isDirectory()) {
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
