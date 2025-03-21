void caesarCipher(char message[],int shift,char encrypted[]){
    for(int i=0;i<40;i++){
        encrypted[i] = (char) (message[i]+shift);
    }
}