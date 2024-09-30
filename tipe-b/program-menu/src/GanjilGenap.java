import java.util.Scanner;

public class GanjilGenap {
     public static void main(String[] args) {
          try (Scanner inputUser = new Scanner(System.in)) {
               System.out.print("Input Batas Bilangan : ");

               int inputBilangan = inputUser.nextInt();
               System.out.println("+-----------------------------+");

               for (int i = 0; i <= inputBilangan; i++) {
                    if (i % 2 == 0) {
                         System.out.println("Bilangan ke " + i + " Genap!");
                    } else {
                         System.out.println("Bilangan ke " + i + " Ganjil!");
                    }
               }
               System.out.println("+-----------------------------+");

               int inputMenu;
               do {
                    System.out.println("Kembali lagi ke menu (1/0)");
                    System.out.print("(1 = YA) atau (0 = TIDAK) : ");
                    inputMenu = inputUser.nextInt();
                    switch (inputMenu) {
                         case 0 -> {
                              System.out.println("Program Telah Berhenti :)");
                              System.exit(0);
                         }
                    }
                    App.main(null);
               } while (inputMenu == 1);
          }
     }
}
