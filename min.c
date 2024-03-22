#include "todolest.h"

int main()
{
    char tres_importont_complet[100][100];
    int size_tic=0;
    char tres_importont_incomplet[100][100];
    int size_tii=0;
    char importont_complet[100][100];
    int size_ic=0;
    char importont_incomplet[100][100];
    int size_ii=0;
    char sons_importont_complet[100][100];
    int size_sic=0;
    char sons_importont_incomplet[100][100];
    int size_sii=0;
    char choix;
    bool repeti=true;
    while(repeti==true){
        menu();
        scanf("%s",&choix);
        switch (choix){
           case '1':
               ajouter(&size_sii,&size_sic,&size_ii,&size_ic,&size_tii,&size_tic,tres_importont_complet,tres_importont_incomplet,importont_complet,importont_incomplet,sons_importont_complet,sons_importont_incomplet);
               break;
           case '2':
                Modifier(&size_sii,&size_sic,&size_ii,&size_ic,&size_tii,&size_tic,tres_importont_complet,tres_importont_incomplet,importont_complet,importont_incomplet,sons_importont_complet,sons_importont_incomplet);
               break;
           case '3':
               supprimer(&size_sii,&size_sic,&size_ii,&size_ic,&size_tii,&size_tic,tres_importont_complet,tres_importont_incomplet,importont_complet,importont_incomplet,sons_importont_complet,sons_importont_incomplet);
               break;
           case '4':
               Afficher(&size_sii,&size_sic,&size_ii,&size_ic,&size_tii,&size_tic,tres_importont_complet,tres_importont_incomplet,importont_complet,importont_incomplet,sons_importont_complet,sons_importont_incomplet);
               break;
           default:
           printf("Le numero que vous avez entre n est pas dans la liste");
            break;
   }
  }
  return 0;
}
