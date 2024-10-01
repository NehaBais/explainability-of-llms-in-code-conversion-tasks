import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException {
    create("."); // current directory
    create("/"); // root directory
  }

  static void create(String directory) throws IOException {
    File file = new File(directory, "output.txt");
    file.createNewFile();
    new File(directory, "docs").mkdirs();
  }
}
