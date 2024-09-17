public class BitwiseOperations {

  public static void main(String[] args) {
    int width = 8;
    int a = 27;
    int b = 125;

    bitwise_built_ins(width, a, b);
    helper_funcs(width, a);
  }

  public static void bitwise_built_ins(int width, int a, int b) {
    int mask = (1 << width) - 1;
    System.out.println("AND: " + Integer.toBinaryString((a & b) & mask));
    System.out.println("OR: " + Integer.toBinaryString((a | b) & mask));
    System.out.println("NOT A: " + Integer.toBinaryString(~a & mask));
  }

  public static void helper_funcs(int width, int a) {
    int mask = (1 << width) - 1;
    // Rotate Right
    System.out.println("ROTATE RIGHT by 1: " + Integer.toBinaryString((a >> 1) & mask));
    System.out.println("ROTATE RIGHT by 2: " + Integer.toBinaryString((a >> 2) & mask));

    // Sign extending arithmetic shift right
    int a_ = (a | (mask << 31)) >> 1;

    System.out.println(
        "Sign extending ARITHMETIC SHIFT RIGHT by 1: " + Integer.toBinaryString(a_ & mask));
  }
}
