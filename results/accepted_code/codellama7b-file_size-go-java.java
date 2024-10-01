import java.io.*;
import java.util.*;

public class Main {
  public static void main(String[] args) throws IOException {
    // Print size of file "input.txt" in current directory
    System.out.println("Size of file input.txt: ");
    File f = new File("input.txt");
    if (f.exists()) {
      System.out.println(f.length());
    } else {
      System.out.println("File does not exist.");
    }

    // Print size of file "/input.txt" in root directory
    System.out.println("Size of file /input.txt: ");
    f = new File("/input.txt");
    if (f.exists()) {
      System.out.println(f.length());
    } else {
      System.out.println("File does not exist.");
    }
  }
}
