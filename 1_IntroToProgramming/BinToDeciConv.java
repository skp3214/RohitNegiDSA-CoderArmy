import java.util.Scanner;

public class BinToDeciConv {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the binary number: ");
        String binary=sc.nextLine();
        int decimal=binaryToDec(binary);
        System.out.print("The Decimal Number is: "+decimal);
        sc.close();
    }

    private static int binaryToDec(String binary) {
        int decimal=0;
        int length=binary.length();
        for(int i=0;i<length;i++){
            String bitValue=String.valueOf(binary.charAt(i));
            int value=Integer.parseInt(bitValue);
            int power=length-i-1;
            decimal+=value*Math.pow(2, power);
        }

        return decimal;

    }
}
