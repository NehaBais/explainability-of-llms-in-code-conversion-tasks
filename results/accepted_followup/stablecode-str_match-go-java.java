import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class StringMatchDemo {

    static boolean startsWith(String first, String second) {
        return first.startsWith(second);
    }

    static boolean contains(String first, String second) {
        Pattern pattern = Pattern.compile("\\Q" + second + "\\E", Pattern.CASE_INSENSITIVE));
        Matcher matcher = pattern.matcher(first);
        return matcher.find();
    }

    static boolean endsWith(String first, String second) {
        return first.endsWith(second);
    }

    public static void main(String[] args) {
        System.out.println("1. Does 'abracadabra' start with 'abr'? " + startsWith("abracadabra", "abr")));
        System.out.println("2. Does 'abracadabra' contain 'abr' at any location? " + contains("abracadabra", "abr")));
        System.out.println("3. Does 'abracadabra' end with 'abr'? " + endsWith("abracadabra", "abr")));
    }
}