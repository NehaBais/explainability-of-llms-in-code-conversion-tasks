import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) {
    try {
      File file = new File("input.txt");
      System.out.println(
          file.exists() ? "Size of input.txt: " + getFileSize(file) : "input.txt doesn't exist");

      file = new File("/", "input.txt");
      System.out.println(
          file.exists() ? "Size of /input.txt: " + getFileSize(file) : "/input.txt doesn't exist");
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  public static long getFileSize(File file) throws IOException {
    return file.exists() ? file.length() : -1;
  }
}
