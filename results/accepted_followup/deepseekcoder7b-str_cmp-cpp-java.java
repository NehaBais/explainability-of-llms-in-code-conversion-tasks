public class Main {
    public static void demoCompare(Number a, Number b, String semantically) {
        System.out.println(a + " and " + b + " are " + 
            ((a.compareTo((String) String.valueOf(b)) == 0) ? "" : "not ") + 
            "exactly numerically equal.");
        
        System.out.println(a + " and " + b + " are " + 
            ((a.compareTo((String) String.valueOf(b)) != 0) ? "" : "not ") + 
            semantically + "inequal.");
        
        System.out.println(a + " is " + 
            ((a.compareTo((String) String.valueOf(b)) < 0) ? "" : "not ") + 
            semantically + " ordered before " + b + '.');
        
        System.out.println(a + " is " + 
            ((a.compareTo((String) String<｜begin▁of▁sentence｜>)) > 0) ? "" : "not ") + 
            semantically + " ordered after " + b + '.');
    }
    
    public static void main(String[] args) {
        double numA = Double.parseDouble(args[1]);
        double numB = Double.parseDouble(args[2]);
        
        demoCompare(numA, numB, "numerically");
    }
}