public class Main {
  public static void main(String[] args) {
    System.out.println("Starts with Test ( Hello,Hell ) : " + startsWith("Hello", "Hell"));
    System.out.println("Ends with Test ( Code,ode ) : " + endsWith("Code", "ode"));
    System.out.println("Contains Test ( Google,msn ) : " + doesContain("Google", "msn"));
  }

  public static int startsWith(String container, String target) {
    int clen = container.length(), tlen = target.length();
    if (clen < tlen) return 0;
    return container.substring(0, tlen).equals(target);
  }

  public static int endsWith(String container, String target) {
    int clen = container.length(), tlen = target.length();
    if (clen < tlen) return 0;
    return container.substring(clen - tlen).equals(target);
  }

  public static int doesContain(String container, String target) {
    return container.indexOf(target) != -1;
  }
}
