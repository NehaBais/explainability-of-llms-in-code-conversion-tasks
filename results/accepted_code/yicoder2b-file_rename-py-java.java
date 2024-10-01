import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException {
    File oldFile = new File("input.txt");
    File newFile = new File("output.txt");
    oldFile.renameTo(newFile);
  }
}
