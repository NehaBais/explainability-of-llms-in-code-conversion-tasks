import java.util.stream.Collectors;
import java.util.Comparator;

public class Main {

    static void demoCompare(String a, String b, String type) 
{
    System.out.println(a + " and " + b + " are " + ((a.equals(b)) ? "" : "not ") + type + " ordered before " + b + '.');
    System.out.println(a + " and " + b + " are " + ((!a.equals(b))) 
? "" : "not ") 
+ type + " ordered after " + b 
+ '.');
}

public static void main(String[] args) 
{
    // Case-sensitive comparisons.
    String a = (args.length > 1) ? args[1] : "Foo";
    String b = (args.length > 2) ? args[2] : "Bar";
    demoCompare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    a = a.toLowerCase();
    b = b.toLowerCase();
    demoCompare(a, b, "lexically"));
}
}