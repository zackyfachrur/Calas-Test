import java.util.Scanner;

public class Biodata {
     public static void main(String[] args) {
          try (Scanner inputUser = new Scanner(System.in)) {
               System.out.print("Input NPM Anda : ");
               String inputNPM = inputUser.nextLine();

               System.out.print("Input Kelas Anda : ");
               String inputKelas = inputUser.nextLine();

               System.out.print("Input Nama Anda : ");
               String inputName = inputUser.nextLine();

               System.out.print("Input Alamat Anda : ");
               String inputAlamat = inputUser.nextLine();

               System.out.println("+------Biodata " + inputName + "------+");
               System.out.println("NPM : " + inputNPM);
               System.out.println("Kelas : " + inputKelas);
               System.out.println("Nama : " + inputName);
               System.out.println("Alamat : " + inputAlamat);
               System.out.println("+-------------------------------------+");

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