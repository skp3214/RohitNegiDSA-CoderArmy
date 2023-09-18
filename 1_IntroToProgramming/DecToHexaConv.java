import java.util.Scanner;

public class DecToHexaConv {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the Decimal Number: ");
        int decimal=sc.nextInt();
        String hexa= decToHexa(decimal);
        System.out.println("The HexaDecimal number is: "+hexa);
        sc.close();
    }

    private static String decToHexa(int decimal) {
        if(decimal==0){
            return"0";
        }
        StringBuilder hexa=new StringBuilder();
        while(decimal>0){
            int rem=decimal%16;
            if(rem==10){
                hexa.insert(0,'A');
            }
            else if(rem==11){
                hexa.insert(0,'B');
            }
            else if(rem==12){
                hexa.insert(0, 'C');
            }
            else if(rem==13){
                hexa.insert(0, 'D');
            }
            else if(rem==14){
                hexa.insert(0,'E');
            }
            else if(rem==15){
                hexa.insert(0,'F');
            }
            else{
                hexa.insert(0,rem);
            }
            decimal=decimal/16;
        }
        return hexa.toString();
    }
}
