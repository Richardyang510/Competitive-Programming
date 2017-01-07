import java.util.*;


public class ccc14j1 {

public static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        //System.out.println("");
        
        boolean good = true;
        

        double ang1 = input.nextDouble();

        double ang2 = input.nextDouble();

        double ang3 = input.nextDouble();
        Double angTot = ang1 + ang2 + ang3;
        
        if (angTot != 180){
            System.out.println("Error");
            good = false;
        }
        else if (ang1 == ang2 && ang2 == ang3 && angTot == 180){
            System.out.println("Equilateral");
        }
        else if (ang1 == ang2 || ang2 == ang3 || ang3 == ang1 && angTot == 180){
            System.out.println("Isosceles");
        }
        else if (ang1 != ang2 && ang2 != ang3 && angTot == 180){
        System.out.println("Scalene");
        }
    }
        }
