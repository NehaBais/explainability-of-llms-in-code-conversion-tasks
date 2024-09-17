public class BitwiseExample {

  public static void main(String[] args) {
    int a = 5; // replace with your desired integer values for a and b
    int b = 3;
    int result;
    System.out.println("a and b: " + (a & b));
    System.out.println("a or b: " + (a | b));
    System.out.println("a xor b: " + (a ^ b));
    System.out.println("not a: " + (~a));
    result = a << b; // left shift
    System.out.println("a << n: " + result);
    result = a >> b; // right shift
    System.out.println("a >> n: " + result);
    int c = a; // convert to unsigned integer for logical shift
    result = c >>> b; // logical right shift
    System.out.println("c >> b: " + result);
  }
}
