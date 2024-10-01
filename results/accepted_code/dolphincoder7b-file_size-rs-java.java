import java.io.*;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws Exception {
    String fileName = args.length > 0 ? args[0] : "input.txt";
    Path file = Paths.get(fileName);

    if (!Files.exists(file)) {
      System.err.println("Error: File not found");
      return;
    }

    long size = Files.size(file);

    System.out.printf("Size of %s is %d bytes%n", fileName, size);
  }
}
