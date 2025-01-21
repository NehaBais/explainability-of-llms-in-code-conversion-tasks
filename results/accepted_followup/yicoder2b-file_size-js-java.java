import java.io.File;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Main {
  public static void main(String[] args) {
    try {
      // Get file of current working directory
      File file = new File("input.txt");
      if (file.exists()) {
        System.out.println(
            "Size of 'input.txt' in current working directory: " + file.length() + " bytes");
      } else {
        System.out.println("File 'input.txt' does not exist in the current working directory.");
      }
      // Get file of filesystem root
      file = new File("/" + "input.txt");
      if (file.exists()) {
        System.out.println("Size of '/input.txt' in filesystem root: " + file.length() + " bytes");
      } else {
        System.out.println("File '/input.txt' does not exist in filesystem root.");
      }
    } catch (IOException ex) { // Fixed the error here by adding this catch block
      Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
    }
  }
}
