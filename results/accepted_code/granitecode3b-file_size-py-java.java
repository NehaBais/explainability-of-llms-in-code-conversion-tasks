import java.io.File;

public class Main {
  public static void main(String[] args) {
    long size1 = new File("input.txt").length();
    long size2 = new File("/input.txt").length();
    System.out.println("Size of input.txt: " + size1 + " bytes");
    System.out.println("Size of /input.txt: " + size2 + " bytes");
  }
}
