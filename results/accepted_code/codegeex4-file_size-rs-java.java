import java.io.File;
import java.nio.file.Files;

public class Main {
  public static void main(String[] args) throws Exception {
    if (args.length == 0) {
      System.exit(1);
    }

    String fileName = args[0];
    File file = new File(fileName);
    long fileSize = getFileSize(file);

    if (fileSize == -1) {
      System.err.println("Error: Invalid file name");
      System.exit(2);
    } else {
      System.out.println("Size of " + fileName + " is " + fileSize + " bytes");
    }
  }

  public static long getFileSize(File file) {
    try {
      return Files.size(file.toPath());
    } catch (Exception e) {
      return -1;
    }
  }
}
