void caesarCipher(char message[],int shift,char encrypted[]){
    for(int i=0;i<sizeof(massage);i++){
        encrypted[i] = (char) (message[i]+shift);
    }
}