#include <stdio.h>




int main(void)
{

	char buff[256];
	FILE *fo;


	////////////////////////////////////////
	fopen_s(&fo,"x:file1.txt","w");

	if(fo==NULL){
		printf("�t�@�C�������݂��܂���");
	}else{
		printf("�f�[�^����͂��ĉ�����:");
		scanf("%s",buff);
		fprintf(fo,"%s",buff);
		fclose(fo);
	}
	////////////////////////////////////////
	fopen_s(&fo,"x:file1.txt","r");

	if(fo==NULL){
		printf("�t�@�C�������݂��܂���");
	}else{
		printf("�R�s�[����f�[�^:");
		fscanf(fo,"%s",buff);
		fclose(fo);

		printf("%s\n",buff);
	}
	////////////////////////////////////////
	fopen_s(&fo,"x:file1Copy.txt","w");
	fprintf(fo,"%s",buff);
	fclose(fo);
	////////////////////////////////////////





	return 0;
}
