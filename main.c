#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#include "menu.h"
#include "phoneAdd.h"
#include "phoneList.h"
#include "phoneSearch.h"


int main()
{
   int choice= 0;
   char searchName[20];
   int searchResult=0;a

   menu();

   do{
        printf("\nSectiginiz islemin numarasini giriniz: ");
        scanf("%d", &choice);

        switch(choice){
        case 1: if(phoneAdd()== 0){
                printf("Telefon basariyla eklenmistir.\n");
                }else{
                printf("Telefon eklenirken bir hata olustu.");
                } break;
        case 2: if(phoneList()==0){
                printf("\nRehber basariyla listelenmistir. ");
                }else{
                printf("Rehber listelenirken bir sorun olustu.");
                } break;
        case 3: printf("Aradiginiz ismi giriniz: ");
                scanf("%s",&searchName);
                searchResult=phoneSearch(searchName);
                if(strlen(searchName)>20){
                    printf("\nMax 20 karakter girebilirsiniz: ");
                    scanf("%s",&searchName);}

                    if(searchResult==0){
                        printf("\n%s isminde bir kayit bulunamamistir.",searchName);
                    }else{
                    printf("\n%s isminde toplam %d kayit bulunmustur.",searchName, searchResult);
                    }
                   break;
        case 4: printf("Cikis yaptiniz,hosca kalin.\n");
           return 0;
            break;
        default: printf("Lutfen gecerli bir numara giriniz.(1-4)\n");
         break;

        }

   }while(choice!=4);


    return 0;}


/*if(strlen(searchName)>20){
                    printf("\nMax 20 karakter girebilirsiniz: ");
                    scanf("%s",&searchName);*/
