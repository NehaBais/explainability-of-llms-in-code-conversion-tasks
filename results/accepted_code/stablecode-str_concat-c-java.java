public class Main {

    public static void main(String[] args) {
        
        // Variable 's' declaration and assignment
        String s = "hello";
        System.out.println("'" + s + "' literal"); 

        /* or */
        System.out.println(s + " literal"));

        // String concatenation using '+'
        String s2 = s + " literal";
        System.out.println(s2);
        
        // Freeing the memory allocated by malloc() in C code
        // In Java, there is no direct equivalent to freeing memory allocated using malloc()
    }

    public static String sconcat(String s1, String s2) {
        return s1 + s2;
    }

}