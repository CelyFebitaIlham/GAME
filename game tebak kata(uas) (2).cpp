#include <stdio.h>

#include <string>

#include <string.h>

using namespace std;

int skor = 0;

int dis  = 1;


void hasilakhir(){
	
	printf("\t\t\t\t skor kamu adalah %d \n ",skor);
	
	printf("\t\t\t\t jawaban benar %d \n ",skor/10);
	
	printf("\t\t\t\t jawaban salah %d \n ",(10-(skor/10)));
	
}
int main(){
	char soal [11][100]={"","cermin dilap jadi _ E _ _ I _","saat syukuran biasanya kita menyediakan _ _ _ _ _ A N","kita tidak bisa menelpon, kalau handphone nya gak ada _ _ _ _ A","dari bandung ke surabaya pake _ E _ _ _ A","jauh dimata dekat dihati apakah itu _ _ U _ ","kalau semut kecil gajah _ E _ A _","beli obat di _ I _ _ M","dirumah makan padang,selain pakai sendok kita makan pakai _ _ N _ _ A","senikmat nikmatnya makan diluar lebih nikmat makan di _ _ L _ _","ikan bernapas di air dengan _ _ _ _ NG"};
	
	char kunci[11][30] ={"","cermin","ruangan","angka","celana","usus","hewan","minum","tenaga","telan","tenang"};
	
	char masukan  [30] = " ";
	
	int soalnomor= 1 ;
	
	int i = 1;
	
	printf("\n\n\t\t\t\t<<<< GAME TEBAK KATA >>>>\n\n");
	while (soalnomor<=10){ 
		printf("%d ",soalnomor);
		printf("%s \n\n", soal[soalnomor]);
		printf("masukan jawaban anda :");
		fgets (masukan,50,stdin);
		printf(" \n\n ");
		int compare = strcmp (masukan, kunci [soalnomor]);
		if(dis==3){
			printf("%s", "sudah 3 kali salah, lanjut jika penasaran");
			hasilakhir();
			system("pause");
		}
		else if (compare == 1 ){
			skor +=10;
		}
		else {
			dis++;
		}
		printf("=========================================\n\n\n");
		soalnomor++;
	}
	printf("Jawaban yang benar:\n");
	for (int i=1; i<=10;i++){
		printf("Jawaban Nomor %d Adalah : %s \n",i,kunci[i]);
	}
	hasilakhir();
	system("pause");
	}
