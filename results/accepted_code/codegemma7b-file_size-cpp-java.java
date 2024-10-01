import java.io.File;
import java.io.IOException;

public class FileSizeChecker {

  public static void main(String[] args) {
    try {
      File inputFile = new File("input.txt");
      File rootInputFile = new File("/input.txt");

      long inputFileSize = inputFile.length();
      long rootInputFileSize = rootInputFile.length();

      System.out.println("Size of file input.txt is " + inputFileSize + " bytes.");
      System.out.println("Size of file /input.txt is " + rootInputFileSize + " bytes.");

    } catch (IOException e) {
      System.err.println("Error getting file size: " + e.getMessage());
    }
  }
}
