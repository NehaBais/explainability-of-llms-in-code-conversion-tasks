import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) {
    if (args.length < 1) {
      System.err.println("No file name supplied");
      System.exit(1);
    }

    File inputTxtFile = new File(args[0]);
    File rootDir = new File("/");

    try {
      long sizeOfInputTxt = inputTxtFile.length();
      long sizeOfRootDir = rootDir.length();

      System.out.println("Size of file.txt is " + sizeOfInputTxt + " bytes");
      System.out.println("Size of root directory is " + sizeOfRootDir + " bytes");
    } catch (IOException e) {
      System.err.println("Error reading the file(s): " + e.getMessage());
      System.exit(2);
    }
  }
}
