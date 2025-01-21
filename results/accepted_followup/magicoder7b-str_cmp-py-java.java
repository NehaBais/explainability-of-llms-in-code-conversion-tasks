public class Main {
  public static void main(String[] args) {
    System.out.println(
        "YUP is of type " + YUP.getClass() + " and BALL is of type " + BALL.getClass());
    if (YUP.compareTo(BALL) < 0) {
      System.out.println("YUP is lexically less than BALL");
    }
    if (YUP.compareTo(BALL) <= 0) {
      System.out.println("YUP is lexically less than or equal to BALL");
    }
    if (YUP.compareTo(BALL) > 0) {
      System.out.println("YUP is lexically greater than BALL");
    }
    if (YUP.compareTo(BALL) >= 0) {
      System.out.println("YUP is lexically greater than or equal to BALL");
    }
    if (YUP.equalsIgnoreCase(BALL)) {
      System.out.println("YUP is case insensitively equal to BALL");
    }
    if (!YUP.equalsIgnoreCase(BALL)) {
      System.out.println("YUP is not case insensitively equal to BALL");
    }
  }
}
