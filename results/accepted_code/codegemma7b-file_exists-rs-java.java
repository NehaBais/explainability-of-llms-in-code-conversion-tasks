import java.io.File;

public class FileVerification {

  public static void main(String[] args) {
    String[] files = {"input.txt", "docs", "/input.txt", "/docs"};

    for (String file : files) {
      File fileObj = new File(file);

      if (fileObj.exists()) {
        if (fileObj.isDirectory()) {
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
