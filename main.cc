//
//
//
//

#include <iostream>
#include <cstdlib>


using namespace std; 

class koffiebord
    private:
      int hoogte;
      int breedte;    
      int koffieprocent;
      int totkoffie;

      void bouwbord();// bouwt het bord
      void initialiseer();// vraagt om gegevens voor het bord

      void strooikoffie();// zet koffiekopjes
  
      void print();// print het bord
  
      void repareer();// eerste zet bom, wordt veilig

      //(void undo: gaat een zet terug)

      void randomzet();
      void menszet();
      void nulvakje();//  *(recursief)

      int klaar; // als je klaar bent returned aantal zetten

      void gaNaar();


class: bordvakje
    private:
      bool gemarkeerd;
      bool koffie;
      bool geopend;
      int koffieburen;
