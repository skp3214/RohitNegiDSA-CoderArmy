import java.util.Scanner;

public class HexaToDeciConv {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the hexadecimal number: ");
        String hexa=sc.nextLine();
        int decimal=hexaToDec(hexa);
        System.out.println("Decimal number is: "+decimal);
        sc.close();
    }

    private static int hexaToDec(String hexa) {
        int decimal=0;
        int length=hexa.length();
        for(int i=0;i<length;i++){
            char bitValue=hexa.charAt(i);
            int value=Character.getNumericValue(bitValue);
            int power=length-i-1;
            decimal+=value*Math.pow(16, power);
        }
        return decimal;
    }
}
