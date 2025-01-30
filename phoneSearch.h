int phoneSearch(char* ptrSearch){
 person listPerson;
 int i=0;
 FILE* fptr;
 fptr=fopen("data.txt", "r");
 if(fptr==NULL){
    return -1;
 }


    while(!feof(fptr)){
        fscanf(fptr,"%s%s%s",listPerson.name,listPerson.lastName,listPerson.number);
        if(!strcmp(ptrSearch,listPerson.name)){
        printf("%s\t\t\t", listPerson.name);
        printf("%s\t\t\t", listPerson.lastName);
        printf("%s\t\t\t\n", listPerson.number);
        i++;}
    }
fclose(fptr);
return i;}
