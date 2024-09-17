import java.util.*;

public class Main {

  public static void printBinary(int number, int width) {
    String binary = Integer.toBinaryString(number);
    while (binary.length() < width) {
      binary = "0" + binary;
    }
    System.out.println("0b" + binary);
  }

  public static void bitwiseBuiltIns(int width, int a, int b) {
    int mask = (1 << width) - 1;

    printBinary(a & b & mask, width);
    System.out.print("&");
    printBinary(b & mask, width);
    System.out.println("= " + Integer.toBinaryString((a & b) & mask));

    printBinary(a | b & mask, width);
    System.out.print("|");
    printBinary(b & mask, width);
    System.out.println("= " + Integer.toBinaryString((a | b) & mask));

    printBinary(a ^ b & mask, width);
    System.out.print("^");
    printBinary(b & mask, width);
    System.out.println("= " + Integer.toBinaryString((a ^ b) & mask));

    printBinary(~a & mask, width);
    System.out.println();
  }

  public static void helperFuncs(int width, int a) {
    int mask = (1 << width) - 1;
    bitwiseBuiltIns(width, a, a >> 1);
    bitwiseBuiltIns(width, a, a << 1);
  }

  public static void main(String[] args) {
    bitwiseBuiltIns(8, 27, 125);
    helperFuncs(8, 27);
  }
}
