public class Main {
    public static void main(String[] args) {
        System.out.println("YUP is of type " + YUP.getClass() + " and BALL is of type " + BALL.getClass());
        if (YUP <  BALL){
            System.out.println('YUP' + " is strictly less than " + 'BALL');
        }
        if (YUP <= BALL){
            System.out.println("YUP" + " is less than or equal to " + 'BALL');
        }
        if (YUP >  BALL) {
            System.out.println('YUP' + " is strictly greater than " + 'BALL');
        }
        if (YUP >= BALL) {
            System.out.println("YUP" + " is greater than or equal to " + 'BALL');
        }
        if (YUP.equals(BALL)) {
            System.out.println('YUP' + " is equal to " + 'BALL');
        }
        if (!YUP.equals(BALL)) {
            System.out.println('YUP' + " is not equal to " + 'BALL');
        }
    }
}