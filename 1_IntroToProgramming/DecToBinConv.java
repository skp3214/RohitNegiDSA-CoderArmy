import java.util.Scanner;

/**
 * DecToBinConv: Decimal to binary conversion. 
 */
public class DecToBinConv {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the Decimal Number: ");
        int decimal=sc.nextInt();

        String binary=decToBinary(decimal);
        System.out.println("The Binary value is "+binary);
        sc.close();
    }

    private static String decToBinary(int decimal) {
        if(decimal==0){
            return "0";
        }

        StringBuilder binary=new StringBuilder();
        while(decimal>0){
            int rem=decimal%2;
            binary.insert(0,rem);
            decimal=decimal/2;
        }
        return binary.toString();
    }
}