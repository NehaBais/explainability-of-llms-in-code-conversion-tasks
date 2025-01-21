import java.io.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    String file_name = "";
    if (args.length == 0) {
      Scanner scanner = new Scanner(System.in);
      System.out.print("Enter the name of the file: ");
      file_name = scanner.nextLine();
    } else {
      file_name = args[1];
    }

    File file = new File(file_name);
    if (!file.exists()) {
      System.err.println("File not found: " + file.getName());
      System.exit(1);
    }

    Path path = file.toPath();
    BasicFileAttributes attrs = Files.readAttributes(path, BasicFileAttributes.class);

    System.out.printf("Size of %s is %d bytes%n", file_name, attrs.size());
  }
}
