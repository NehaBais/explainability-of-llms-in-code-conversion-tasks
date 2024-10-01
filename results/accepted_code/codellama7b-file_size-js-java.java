import java.io.File;

public class FileSize {
  public static void main(String[] args) throws Exception {
    // Create a new File object for the input.txt file in the current working directory
    File file = new File("input.txt");

    // Get the size of the file using the getFreeSpace() method
    long fileSize = file.getFreeSpace();

    System.out.println(
        String.format("The size of %s is %d bytes", file.getCanonicalPath(), fileSize));

    // Create a new File object for the file in the root directory
    File rootFile = new File("c:/input.txt");

    // Get the size of the file using the getFreeSpace() method
    long rootFileSize = rootFile.getFreeSpace();

    System.out.println(
        String.format("The size of %s is %d bytes", rootFile.getCanonicalPath(), rootFileSize));
  }
}
