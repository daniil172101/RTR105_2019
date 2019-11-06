/* studenta apliieciibas numurs
 191REB138 */
#include <stdio.h>
#include <stdlib.h>

 int main () {
 int i, N;
 N = (8+1)*3; //Z - studenu aplieciibas peedeejais cipars
 int a[N];
 /* Gadiijumskaitlu generaacija */
 srand(1); //X - studentu aplieciibas 3. cipars no beigaam
/* Genereet un iegaumeet Z skaitlus diapazonaa no 0 liidz 10*/
 for( i = 0 ; i < N ; i++ ) {
  a[i]=rand() % 10;
}
/* Masiiva drukaasana */
 for( i = 0 ; i < N ; i++ ) {
  printf("%d\n", a[i]);
}
 return(0);
}
