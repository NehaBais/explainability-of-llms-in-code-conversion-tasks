import java.io.File;

public class FileSizeChecker {

  public static void main(String[] args) {
    // Get the file size of input.txt in the current working directory
    File inputFile = new File("input.txt");
    long inputFileSize = inputFile.length();

    // Get the file size of input.txt in the file system root
    File rootInputFile = new File("c:/input.txt");
    long rootInputFileSize = rootInputFile.length();

    // Print the file sizes
    System.out.println("Input file size: " + inputFileSize);
    System.out.println("Root input file size: " + rootInputFileSize);
  }
}
