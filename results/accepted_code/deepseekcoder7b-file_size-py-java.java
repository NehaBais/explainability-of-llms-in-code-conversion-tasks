import java.io.File;

public class Main {
  public static void main(String[] args) {
    File file = new File("input.txt");
    long size = file.length();

    // For the file in the root directory, you have to provide an absolute path instead of a
    // relative one
    File rootFile = new File("/input.txt");
    long rootSize = rootFile.length();
  }
}
