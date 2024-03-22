#ifndef TODOLEST_H
#define TODOLEST_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void menu();
void ajouter(int *size_sii,int *size_sic,int *size_ii,int *size_ic,int *size_tii,int *size_tic,char tres_importont_complet[][100],char tres_importont_incomplet[][100],char importont_complet[][100],char importont_incomplet[][100],char sons_importont_complet[][100],char sons_importont_incomplet[][100]);
void Afficher(int *size_sii,int *size_sic,int *size_ii,int *size_ic,int *size_tii,int *size_tic,char tres_importont_complet[][100],char tres_importont_incomplet[][100],char importont_complet[][100],char importont_incomplet[][100],char sons_importont_complet[][100],char sons_importont_incomplet[][100]);
void supprimer(int *size_sii,int *size_sic,int *size_ii,int *size_ic,int *size_tii,int *size_tic,char tres_importont_complet[][100],char tres_importont_incomplet[][100],char importont_complet[][100],char importont_incomplet[][100],char sons_importont_complet[][100],char sons_importont_incomplet[][100]);
void Modifier(int *size_sii,int *size_sic,int *size_ii,int *size_ic,int *size_tii,int *size_tic,char tres_importont_complet[][100],char tres_importont_incomplet[][100],char importont_complet[][100],char importont_incomplet[][100],char sons_importont_complet[][100],char sons_importont_incomplet[][100]);
#endif // TODOLEST_H
