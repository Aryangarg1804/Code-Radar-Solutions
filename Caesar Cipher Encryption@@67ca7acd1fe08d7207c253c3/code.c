void caesarCipher(char message[],int shift,char encrypted[]){
    for(int i=0;i<sizeof(message);i++){
        encrypted[i] = (char) (message[i]+shift);
    }
}