import java.io.IOException;
import java.nio.file.*;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    printFile("input.txt");
    printFile("/input.txt");
  }

  private static void printFile(String fileName) {
    try (var scanner = new Scanner(Files.newInputStream(Paths.get(fileName)))) {
      System.out.println(
          "Size of file " + fileName + " is " + Files.size(Paths.get(fileName)) + " bytes.");
    } catch (IOException e) {
      System.err.println(e);
    }
  }
}
