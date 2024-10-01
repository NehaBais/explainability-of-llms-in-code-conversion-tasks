import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;

public class FileSizeVerifier {
  public static void main(String[] args) {
    String fileName = args[0];
    File file = new File(fileName);
    long fileSize = 0;
    try {
      FileInputStream fis = new FileInputStream(file);
      fileSize = fis.skip(Long.MAX_VALUE);
      System.out.println("Size of " + fileName + " is " + fileSize + " bytes");
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
