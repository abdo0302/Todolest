#include "todolest.h"

void menu(){
    printf("\n\n======================================== To Do List Application ========================================\n\n");
    printf("1.Ajouter Une Tache\n2.Modifier Nme Tache\n3.Supprimer Une Tache\n4.Afficher Les Tache\n\nEntrez le number de votre choix ==> ");
}
void ajouter(int *size_sii,int *size_sic,int *size_ii,int *size_ic,int *size_tii,int *size_tic,char tres_importont_complet[][100],char tres_importont_incomplet[][100],char importont_complet[][100],char importont_incomplet[][100],char sons_importont_complet[][100],char sons_importont_incomplet[][100]){
    printf("_______________________________________________________________________________________________________\n\n=========================================   Ajouter Une Tache   ========================================\n________________________________________________________________________________________________________\n\n");
    int Priorite,statut;
    char p[12];
    char s[12];
    bool lop=true;
    bool repet=true;
    while(lop==true){
    printf("Priorite De Tache : \n       1.Tres Importont\n       2.Importont\n       3.Sons Importont\n Entrez le number de votre choix ==> ");
            // entre priorite
        scanf("%s",&p);
        Priorite=atoi(p);
         switch (Priorite){
           case 1:
             lop=false;
               break;
           case 2:
              lop=false;
               break;
           case 3:
               lop=false;
               break;
           default:
           printf("\nLe numero que vous avez entre n est pas dans la liste\n");
           break;
               }
    }
    while(repet==true){
       printf("Statut De Tache : \n       1.Complet\n       2.Incomplet\n Entrez le numero de votre choix ==> ");
         // entre statut
        scanf("%s",&s);
        statut=atoi(s);
         switch (statut){
           case 1:
                repet=false;
               break;
           case 2:
               repet=false;
               break;
           default:
           printf("\nLe numero que vous avez entre n est pas dans la liste");
             break;
               }
    }
      printf("\nTitre De Tache :-> ");
    //choize arry
    if(Priorite==1 &&statut==1){
            scanf(" %[^\n]s", tres_importont_complet[*size_tic]);
          printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete ajoutee avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (*size_tic)++;
        }else if(Priorite==1 &&statut==2){
            scanf(" %[^\n]s", tres_importont_incomplet[*size_tii]);
          printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete ajoutee avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (* size_tii)++;
        }else if(Priorite==2 &&statut==1){
            scanf(" %[^\n]s", importont_complet[*size_ic]);
           printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete ajoutee avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (*size_ic)++;
        }else if(Priorite==2 &&statut==2){
            scanf(" %[^\n]s", importont_incomplet[*size_ii]);
           printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete ajoutee avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (*size_ii)++;
        }else if(Priorite==3 &&statut==1){
            scanf(" %[^\n]s",sons_importont_complet[*size_sic]);
           printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete ajoutee avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (*size_sic)++;
        }else if(Priorite==3 &&statut==2){
          scanf(" %[^\n]s",sons_importont_incomplet[*size_sii]);
          printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete ajoutee avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (*size_sii)++;
        }
}
void Afficher(int *size_sii,int *size_sic,int *size_ii,int *size_ic,int *size_tii,int *size_tic,char tres_importont_complet[][100],char tres_importont_incomplet[][100],char importont_complet[][100],char importont_incomplet[][100],char sons_importont_complet[][100],char sons_importont_incomplet[][100]){
    printf("\n\n_______________________________________________________________________________________________________\n\n=========================================   Afficher Les Tache   ========================================\n________________________________________________________________________________________________________\n\n");
   char a[12];
   int affche;
   bool repete=true;
   if(*size_sii!=0 || *size_sic!=0 || *size_ii!=0 || *size_ic!=0 || *size_tii!=0 || *size_tic!=0){
    while(repete==true){
        printf("Filtrer les taches par \n          1.Tout les taches\n          2.Priorite de taches \n          3.les taches terminiee\n Entrez le numero de votre choix ==>");
        scanf("%s",&a);
        affche=atoi(a);
         switch (affche){
           case 1:            // Tout
               printf("\n\n__________________________________________________ Tout les taches __________________________________________________\n");
               for(int i=0;i<*size_tic;++i){
                printf("\n %s",tres_importont_complet[i]);
                printf("               ( la tache tres importont )          (complet)");
               }
               for(int i=0;i<*size_ic;++i){
                    printf("\n %s",importont_complet[i]);
                    printf("               ( la tache importont)            (complet)");
               }
               for(int i=0;i<*size_sic;++i){
                    printf("\n %s",sons_importont_complet[i]);
                    printf("               ( la tache sons importont)       (complet)");;
               }
               for(int i=0;i<*size_tii;++i){
                    printf("\n %s",tres_importont_incomplet[i]);
                    printf("               ( la tache sons tres importont)   (incomplet)");
               }
               for(int i=0;i<*size_ii;++i){
                    printf("\n %s",importont_incomplet[i]);
                    printf("               ( la tache importont_incomplet)   (incomplet)");
               }
                repete=false;
               break;
           case 2:    //         Priorite
                printf("\n\n__________________________________________________ Filtrer par Priorite __________________________________________________\n");
               for(int i=0;i<*size_tic;++i){
                printf("\n %s",tres_importont_complet[i]);
               }
               for(int i=0;i<*size_tii;++i){
                    printf("\n %s",tres_importont_incomplet[i]);
               }
               for(int i=0;i<*size_ic;++i){
                    printf("\n %s",importont_complet[i]);
               }
               for(int i=0;i<*size_ii;++i){
                    printf("\n %s",importont_incomplet[i]);
               }
               for(int i=0;i<*size_sic;++i){
                    printf("\n %s",sons_importont_complet[i]);
               }
               repete=false;
               break;
            case 3:
                printf("\n\n__________________________________________________ les taches terminee __________________________________________________\n");
                printf("les taches complet ::\n");
               for(int i=0;i<*size_tic;++i){
                printf("\n %s",tres_importont_complet[i]);
               }
               for(int i=0;i<*size_ic;++i){
                    printf("\n %s",importont_complet[i]);
               }
               for(int i=0;i<*size_sic;++i){
                    printf("\n %s",sons_importont_complet[i]);
               }
                repete=false;
               break;
           default:
           printf("Le numero que vous avez entre n est pas dans la liste");

             break;
               }
    }
}else{
     printf("Il n y a aucune tache enregistree");
}
}
void supprimer(int *size_sii,int *size_sic,int *size_ii,int *size_ic,int *size_tii,int *size_tic,char tres_importont_complet[][100],char tres_importont_incomplet[][100],char importont_complet[][100],char importont_incomplet[][100],char sons_importont_complet[][100],char sons_importont_incomplet[][100]){
     printf("\n\n_______________________________________________________________________________________________________\n\n=========================================   supprimer Les Tache   ========================================\n________________________________________________________________________________________________________\n\n");
      //  les taches
                int index=0;
               for(int i=0;i<*size_tic;++i){
                    index++;
                printf("\n%da. %s",i,tres_importont_complet[i]);

               }
               for(int i=0;i<*size_tii;++i){
                   index++;
                    printf("\n%dz. %s",i,tres_importont_incomplet[i]);
               }
               for(int i=0;i<*size_ic;++i){
                   index++;
                    printf("\n%de. %s",i,importont_complet[i]);
               }
               for(int i=0;i<*size_ii;++i){
                   index++;
                    printf("\n%dr. %s",i,importont_incomplet[i]);
               }
               for(int i=0;i<*size_sic;++i){
                   index++;
                    printf("\n%dt. %s",i,sons_importont_complet[i]);
               }
   char nomber_de_tach[12];
   char *c;
   char *n;
   n=nomber_de_tach; // index
   c=nomber_de_tach+1;
   int ndt;
   bool repete=true;
    while(repete==true){
     if(index!=0){
       printf("\nEntrez le numero de votre choix ==>\n");
        scanf(" %s",&nomber_de_tach);
        ndt=atoi(n);
         if(ndt<=*size_tic && *c=='a'){   //  1
              for (int i = ndt; i < *size_tic - 1; i++) {
                   strcpy(tres_importont_complet[i], tres_importont_complet[i + 1]);
           }
              (*size_tic)--;
              printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete effacee avec succes  |||||||||||||||||||||||||||||||||\n\n");
             repete=false;
         }else if(ndt<=*size_tii && *c=='z'){ // 2
              for (int i =ndt; i < *size_tii - 1; i++) {
                   strcpy(tres_importont_incomplet[i], tres_importont_incomplet[i + 1]);
           }
              (*size_tii)--;
              printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete effacee avec succes  |||||||||||||||||||||||||||||||||\n\n");
             repete=false;
         }else if(ndt<=*size_ic && *c=='e'){  //3
            for (int i =ndt; i < *size_ic - 1; i++) {
                   strcpy(importont_complet[i], importont_complet[i + 1]);
           }
              (*size_ic)--;
              printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete effacee avec succes  |||||||||||||||||||||||||||||||||\n\n");
             repete=false;
         }else if(ndt<=*size_ii && *c=='r'){  //4
             for (int i =ndt; i < *size_ii - 1; i++) {
                   strcpy(importont_incomplet[i], importont_incomplet[i + 1]);
           }
              (*size_ii)--;
              printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete effacee avec succes  |||||||||||||||||||||||||||||||||\n\n");
             repete=false;
         }else if(ndt<=*size_sic && *c=='t'){ //5
             for (int i =ndt; i < *size_sic - 1; i++) {
                   strcpy(sons_importont_complet[i], sons_importont_complet[i + 1]);
           }
              (*size_sic)--;
              printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete effacee avec succes  |||||||||||||||||||||||||||||||||\n\n");
             repete=false;
         }
         else{
             printf("Le numero que vous avez entre n est pas dans la liste");
}
         }else{
            printf("Il n y a aucune tache enregistree");
            repete=false;
         }
    }
}
void Modifier(int *size_sii,int *size_sic,int *size_ii,int *size_ic,int *size_tii,int *size_tic,char tres_importont_complet[][100],char tres_importont_incomplet[][100],char importont_complet[][100],char importont_incomplet[][100],char sons_importont_complet[][100],char sons_importont_incomplet[][100]){
      int index=0;
               for(int i=0;i<*size_tic;++i){
                    index++;
                printf("\n%da. %s",i,tres_importont_complet[i]);
               }
               for(int i=0;i<*size_tii;++i){
                   index++;
                    printf("\n%dz. %s",i,tres_importont_incomplet[i]);
               }
               for(int i=0;i<*size_ic;++i){
                   index++;
                    printf("\n%de. %s",i,importont_complet[i]);
               }
               for(int i=0;i<*size_ii;++i){
                   index++;
                    printf("\n%dr. %s",i,importont_incomplet[i]);
               }
               for(int i=0;i<*size_sic;++i){
                   index++;
                    printf("\n%dt. %s",i,sons_importont_complet[i]);
               }
        char nomber_de_tach[12];
        char *c;
        char *n;
        n=nomber_de_tach; // index
        c=nomber_de_tach+1;
        int ndt;
        bool ad=false;
   bool repete=true;
    while(repete==true){
     if(index!=0){
       printf("\nEntrez le numero de votre choix ==>\n");
        scanf(" %s",&nomber_de_tach);
        ndt=atoi(n);
         if(ndt<=*size_tic && *c=='a'){   //  1
              for (int i = ndt; i < *size_tic - 1; i++) {
                   strcpy(tres_importont_complet[i], tres_importont_complet[i + 1]);
           }
              (*size_tic)--;
            ad=true;
             repete=false;
         }else if(ndt<=*size_tii && *c=='z'){ // 2
              for (int i =ndt; i < *size_tii - 1; i++) {
                   strcpy(tres_importont_incomplet[i], tres_importont_incomplet[i + 1]);
           }
              (*size_tii)--;
             ad=true;
             repete=false;
         }else if(ndt<=*size_ic && *c=='e'){  //3
            for (int i =ndt; i < *size_ic - 1; i++) {
                   strcpy(importont_complet[i], importont_complet[i + 1]);
           }
              (*size_ic)--;
            ad=true;
             repete=false;
         }else if(ndt<=*size_ii && *c=='r'){  //4
             for (int i =ndt; i < *size_ii - 1; i++) {
                   strcpy(importont_incomplet[i], importont_incomplet[i + 1]);
           }
              (*size_ii)--;
             ad=true;
             repete=false;
         }else if(ndt<=*size_sic && *c=='t'){ //5
             for (int i =ndt; i < *size_sic - 1; i++) {
                   strcpy(sons_importont_complet[i], sons_importont_complet[i + 1]);
           }
              (*size_sic)--;
             ad=true;
             repete=false;
         }
         else{
             printf("Le numero que vous avez entre n est pas dans la liste");
           }
         }else{
            printf("Il n y a aucune tache enregistree");
            repete=false;
         }
    }
  if(ad==true){
    int Priorite,statut;
    char p[12];
    char s[12];
    bool lop=true;
    bool repet=true;
      while(lop==true){
    printf("Priorite De Tache : \n       1.Tres Importont\n       2.Importont\n       3.Sons Importont\n Entrez le number de votre choix ==>");
            // entre priorite
        scanf(" %s",&p);
        Priorite=atoi(p);
         switch (Priorite){
           case 1:
             lop=false;
               break;
           case 2:
              lop=false;
               break;
           case 3:
               lop=false;
               break;
           default:
           printf("Le numero que vous avez entre n est pas dans la liste\n");
           break;
               }
    }
    while(repet==true){
       printf("Statut De Tache : \n       1.Complet\n       2.Incomplet\n Entrez le numero de votre choix ==>");
         // entre statut
        scanf(" %s",&s);
        statut=atoi(s);
         switch (statut){
           case 1:
                repet=false;
               break;
           case 2:
               repet=false;
               break;
           default:
           printf("Le numero que vous avez entre n est pas dans la liste");
             break;
               }
    }
      printf("Titre De Tache :->");
    //choize arry
    if(Priorite==1 &&statut==1){
            scanf(" %[^\n]s", tres_importont_complet[*size_tic]);
          printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete Modifiere avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (*size_tic)++;
        }else if(Priorite==1 &&statut==2){
            scanf(" %[^\n]s", tres_importont_incomplet[*size_tii]);
          printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete Modifiere avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (* size_tii)++;
        }else if(Priorite==2 &&statut==1){
            scanf(" %[^\n]s", importont_complet[*size_ic]);
           printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete Modifiere avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (*size_ic)++;
        }else if(Priorite==2 &&statut==2){
            scanf(" %[^\n]s", importont_incomplet[*size_ii]);
           printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete Modifiere avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (*size_ii)++;
        }else if(Priorite==3 &&statut==1){
            scanf(" %[^\n]s",sons_importont_complet[*size_sic]);
           printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete Modifiere avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (*size_sic)++;
        }else if(Priorite==3 &&statut==2){
          scanf(" %[^\n]s",sons_importont_incomplet[*size_sii]);
          printf("\n\n|||||||||||||||||||||||||||||||||  La tache a ete Modifiere avec succes  |||||||||||||||||||||||||||||||||\n\n");
         (*size_sii)++;
        }
  }
}
