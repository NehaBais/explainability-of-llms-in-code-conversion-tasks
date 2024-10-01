import java.io.*;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {

  public static void main(String[] args) {
    String fileName = "input.txt";

    File currentDirFile = new File("./" + fileName);
    if (currentDirFile.exists()) {
      try {
        System.out.println(
            "Size of "
                + fileName
                + " in the current directory is: "
                + Files.size(Paths.get("./" + fileName))
                + " bytes");
      } catch (IOException e) {
        e.printStackTrace();
      }
    } else {
      System.out.println(fileName + " does not exist in the current directory.");
    }

    File rootDirFile = new File("/" + fileName);
    if (rootDirFile.exists()) {
      try {
        System.out.println(
            "Size of "
                + fileName
                + " In the root directory is: "
                + Files.size(Paths.get("/" + fileName))
                + " bytes");
      } catch (IOException e) {
        e.printStackTrace();
      }
    } else {
      System.out.println(fileName + " does not exist in the root directory.");
    }
  }
}
