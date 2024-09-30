import java.util.Scanner;

public class Lingkaran {
     public static void main(String[] args) {
          double LuasLingkaran, KelilingLingkaran;
          try (Scanner inputUser = new Scanner(System.in)) {
               System.out.print("Input Panjang Jari - Jari : ");
               int inputJariJari = inputUser.nextInt();
               System.out.println("+------------Output------------+");
               LuasLingkaran = Math.PI * inputJariJari * inputJariJari;
               System.out.println("Luas Lingkarang : " + (int) LuasLingkaran);
               KelilingLingkaran = 2 * Math.PI * inputJariJari;
               System.out.println("Keliling Lingkaran : " + (int) KelilingLingkaran);
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
