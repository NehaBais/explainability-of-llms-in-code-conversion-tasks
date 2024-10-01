import java.io.*;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.out.println("usage: mkdir <path>");
      return;
    }

    Path pathToCreate = Paths.get(args[0]);

    try {
      Files.createDirectories(pathToCreate); // Creates the directories if they do not exist already
    } catch (IOException e) {
      System.out.println(
          "couldn't create directory: "
              + pathToCreate.toString()); // Prints error message if failed to create a directory
      return;
    }
  }
}
