import java.io.*;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    String inputFile = "input.txt";
    File file = new File(inputFile);
    long size = Files.size(file.toPath());
    System.out.println("Size of " + inputFile + ": " + size);

    String rootInputFile = "/input.txt";
    File rootFile = new File(rootInputFile);
    size = Files.size(rootFile.toPath());
    System.out.println("Size of " + rootInputFile + ": " + size);
  }
}
