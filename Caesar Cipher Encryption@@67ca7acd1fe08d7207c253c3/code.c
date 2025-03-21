void caesarCipher(char message[],int shift,char encrypted[]){
    int i;
    for(i=0;message[i]!='\0';i++){
        char ch = message[i];
        if(ch>=97 && ch=<122){
            encrypted[i] = ((ch - 'A' + shift) %26) + 'A';
        } else if(ch >= 65 && ch<=90){
            encrypted[i] = ((ch - 'a' + shift) %26) + 'a';
        } else{
            encrypted[i] = ch;
        }

    }
    encrypted[i+1] = '\0';
}