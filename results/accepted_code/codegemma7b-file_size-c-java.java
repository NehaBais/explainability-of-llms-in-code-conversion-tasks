import java.io.File;
import java.io.IOException;

public class FileSizeChecker {

  public static void main(String[] args) throws IOException {
    File inputFile = new File("input.txt");
    File rootFile = new File("/");

    long inputFileSize = inputFile.length();
    long rootFileSize = rootFile.length();

    System.out.println(inputFileSize);
    System.out.println(rootFileSize);
  }
}
