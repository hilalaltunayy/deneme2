m zint phoneAdd(){
 person newPerson;
 FILE* fptr;

 fptr=fopen("data.txt", "a");
    if(fptr==NULL){
        return -1;
    }

    printf("\n\nLutfen isim giriniz(max 20 karakter): ");
    scanf("%s",newPerson.name);
        if(strlen(newPerson.name)>20){
            printf("Lutfen 20 karakterli bir isim giriniz: ");
            scanf("%s",newPerson.name);
        }



    printf("\nLutfen soyisim giriniz(max 20 karakter): ");
    scanf("%s",newPerson.lastName);
     if(strlen(newPerson.lastName)>20){
            printf("Lutfen 20 karakterli bir isim giriniz: ");
            scanf("%s",newPerson.lastName);
        }


    printf("\nLutfen numara giriniz(max 3 karakter): ");
    scanf("%s",newPerson.number);
     if(strlen(newPerson.number)>3){
            printf("Lutfen 3 karakterli bir numara giriniz: ");
            scanf("%s",newPerson.number);
        }

        fprintf(fptr, "\n\n%s %s %s",newPerson.name, newPerson.lastName, newPerson.number);
        fclose(fptr);
   return 0;
}
