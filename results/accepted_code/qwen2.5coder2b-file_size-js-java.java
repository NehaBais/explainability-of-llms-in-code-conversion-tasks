import java.io.File;

public class FileSizeChecker {
  public static void main(String[] args) {
    // Get the size of file 'input.txt' in the current working directory.
    long fileSize1 = getFileSize("input.txt");

    // Get the size of file 'c:/input.txt' in the root directory.
    long fileSize2 = getFileSize("c:/input.txt");

    System.out.println("File size in current working directory: " + fileSize1);
    System.out.println("File size in root directory: " + fileSize2);
  }

  private static long getFileSize(String fileName) {
    File file = new File(fileName);

    if (!file.exists()) {
      throw new RuntimeException("The specified file does not exist.");
    }

    return file.length();
  }
}
