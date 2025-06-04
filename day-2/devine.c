#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  int main() {
  int secret, Nproposer, essais;
  srand(time(NULL));
  secret = rand() % 100 + 1;
  printf("devinez un nombre entre 1 et 100 !/n");
  essais = 0;
  do {
        printf("Votre proposition : ");
        scanf("%d", &Nproposer);
        essais++;

        if (Nproposer < secret) {
            printf("C'est plus grand !\n");
        } else if (Nproposer > secret) {
            printf("C'est plus petit !\n");
        } else {
            printf("Bravo ! Vous avez trouvé le nombre en %d essai(s) !\n", essais);
        }
 } while (Nproposer != secret);

    return 0;
}
