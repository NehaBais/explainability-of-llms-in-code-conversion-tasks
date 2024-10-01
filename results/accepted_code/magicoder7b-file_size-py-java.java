import java.io.File;

public class Main {
  public static void main(String[] args) {
    File file1 = new File("input.txt"); // For current directory
    System.out.println("Size of input.txt in the current directory: " + getSizeOfFile(file1));

    File file2 = new File("/input.txt"); // For root directory
    System.out.println("Size of input.txt in the root directory: " + getSizeOfFile(file2));
  }

  private static long getSizeOfFile(File file) {
    if (file.exists() && !file.isDirectory())
      return file.length(); // Get the size of the file in bytes
    else System.out.println("The file does not exist or is a directory.");

    return -1;
  }
}
