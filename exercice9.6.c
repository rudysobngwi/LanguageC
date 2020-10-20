int ma_saisie (char* chaine) {
	chaine[100]='A';
return 0;
}

int main(){
 char ma_chaine [130];
 for (int indice = 0; indice < 130 ; indice++ ){
       ma_chaine[indice] ='r';
 }
 printf("ma_chaine = %s\n", ma_chaine);
 ma_saisie (ma_chaine);
 printf("ma_chaine = %s\n", ma_chaine);
return 0;
} 
