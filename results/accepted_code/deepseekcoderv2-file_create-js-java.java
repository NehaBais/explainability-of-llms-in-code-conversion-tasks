import java.io.*;

public class Conversion {
  public static void main(String[] args) {
    File file = new File("output.txt");
    try {
      if (file.createNewFile()) {
        System.out.println("The file has been created.");
      } else {
        System.out.println("The file already exists.");
      }
    } catch (IOException e) {
      System.err.println(e.getMessage());
    }
    File dir = new File("/");
    if (!dir.exists()) {
      dir.mkdir();
    }
  }
}
