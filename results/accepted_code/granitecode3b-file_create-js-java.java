import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class FileCreator {
  public static void main(String[] args) {
    try (BufferedWriter writer = new BufferedWriter(new FileWriter("output.txt"));
        BufferedWriter rootWriter = new BufferedWriter(new FileWriter("/output.txt"))) {
      // do nothing, just create the files
    } catch (IOException e) {
      System.err.println("Error creating file: " + e.getMessage());
    }

    try (BufferedWriter writer = new BufferedWriter(new FileWriter("docs"));
        BufferedWriter rootWriter = new BufferedWriter(new FileWriter("/docs"))) {
      // do nothing, just create the directories
    } catch (IOException e) {
      System.err.println("Error creating directory: " + e.getMessage());
    }
  }
}
