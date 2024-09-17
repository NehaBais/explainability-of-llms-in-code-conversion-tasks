import java.nio.BitSet;

public class Main {

  public static void main(String[] args) {
    System.out.println("Bitwise operations and bit rotation in Java.");

    int width = 8, a = 27, b = 125;

    System.out.println(
        "\nAND: 0b" + Integer.toBinaryString(a) + " & 0b" + Integer.toBinaryString(b));
    int AND = a & b;
    System.out.println("= 0b" + Integer.toBinaryString(AND));

    System.out.println(
        "\nOR: 0b" + Integer.toBinaryString(a) + " | 0b" + Integer.toBinaryString(b));
    int OR = a | b;
    System.out.println("= 0b" + Integer.toBinaryString(OR));

    System.out.println(
        "\nXOR: 0b" + Integer.toBinaryString(a) + " ^ 0b" + Integer.toBinaryString(b));
    int XOR = a ^ b;
    System.out.println("= 0b" + Integer.toBinaryString(XOR));

    BitSet bitsetA = new BitSet();
    bitsetA.set(a);
    System.out.println("\nNOT: ~ " + bitsetA.toString());
    BitSet notABitset = bitwiseNot(bitsetA);
    System.out.println("= " + notABitset.toString());

    BitSet rBitset = bitwiseRightShift(a, 1);
    System.out.println("\nRIGHT SHIFT: 0b" + Integer.toBinaryString(a) + " >> 1");
    System.out.println("= 0b" + Integer.toBinaryString(rBitset.cardinality()));

    BitSet lBitset = bitwiseLeftShift(a, 1);
    System.out.println("\nLEFT SHIFT: 0b" + Integer.toBinaryString(a) + " << 1");
    System.out.println("= 0b" + Integer.toBinaryString(lBitset.cardinality()));
  }

  private static BitSet bitwiseLeftShift(int a, int n) {
    BitSet bitset = new BitSet();
    for (int i = 0; i < n; i++) {
      if ((a & (1 << i)) != 0) {
        bitset.set(i);
      } else {
        bitset.clear(i);
      }
    }
    return bitset;
  }

  private static BitSet bitwiseRightShift(int a, int n) {
    BitSet bitset = new BitSet();
    for (int i = 0; i < n; i++) {
      if ((a & (1 << (32 - 1 - i))) != 0) {
        bitset.set(i);
      } else {
        bitset.clear(i);
      }
    }
    return bitset;
  }

  private static BitSet bitwiseNot(BitSet a) {
    BitSet notABitset = new BitSet();

    for (int i = 0; i < 32; i++) {
      if (!a.get(i)) {
        notABitset.set(i);
      } else {
        notABitset.clear(i);
      }
    }

    return notABitset;
  }
}
