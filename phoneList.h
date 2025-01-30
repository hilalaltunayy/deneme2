int phoneList(){
 person listPerson;
 FILE* fptr;
 fptr=fopen("data.txt", "r");
 if(fptr==NULL){
    return -1;
 }
    printf("\n\nIsim\t\t\tSoyisim\t\t\tNumara\n\n");

    while(!feof(fptr)){
        fscanf(fptr,"%s%s%s",listPerson.name,listPerson.lastName,listPerson.number);
        printf("%s\t\t\t", listPerson.name);
        printf("%s\t\t\t", listPerson.lastName);
        printf("%s\t\t\t\n", listPerson.number);
    }
fclose(fptr);
return 0;
}
