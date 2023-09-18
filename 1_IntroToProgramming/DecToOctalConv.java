import java.util.Scanner;

public class DecToOctalConv {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the Decimal number: ");
        int decimal =sc.nextInt();

        String octal=decToOct(decimal);
        System.out.println("The Octal number is "+octal);
        sc.close();
    }

    private static String decToOct(int decimal) {
        if(decimal==0){
            return "0";
        }
        StringBuilder octal=new StringBuilder();
        while(decimal>0){
            int rem=decimal%8;
            octal.insert(0,rem);
            decimal=decimal/8;
        }
        return octal.toString();
    }
}
