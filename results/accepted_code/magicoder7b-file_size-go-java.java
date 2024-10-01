import java.io.*;

public class Main {

  public static void main(String[] args) {
    try {
      printFileSize("input.txt");
      printFileSize("/input.txt");
    } catch (IOException e) {
      System.out.println(e);
    }
  }

  public static void printFileSize(String f) throws IOException {
    File file = new File(f);

    if (!file.exists()) {
      System.out.println("File does not exist");
    } else {
      long size = file.length();
      System.out.println("The size of the file is " + size + " bytes");
    }
  }
}
