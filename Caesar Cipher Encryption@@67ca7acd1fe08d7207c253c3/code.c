void caesarCipher(char message[],int shift,char encrypted[]){
    for(int i=0;i<n;i++){
        encrypted[i] = (char) (message[i]+shift);
    }
}