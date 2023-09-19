import java.util.Scanner;

public class OctToDeciConv {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter the octal number");
        String octal=sc.nextLine();
        int decimal=octToDec(octal);
        System.out.print("The Decimal number is: "+decimal);
        sc.close();
    }

    private static int octToDec(String octal) {
        int decimal=0;
        int length=octal.length();
        for(int i=0;i<length;i++){
            char bitvalue=octal.charAt(i);
            int value=Character.getNumericValue(bitvalue);
        
            int power=length-i-1;
            decimal+=value*Math.pow(8, power);
        }
        return decimal;
    }
}
