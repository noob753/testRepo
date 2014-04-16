#include <stdio.h>




int main(void)
{

	char buff[256];
	FILE *fo;


	////////////////////////////////////////
	fopen_s(&fo,"x:file1.txt","w");

	if(fo==NULL){
		printf("ファイルが存在しません");
	}else{
		printf("データを入力して下さい:");
		scanf("%s",buff);
		fprintf(fo,"%s",buff);
		fclose(fo);
	}
	////////////////////////////////////////
	fopen_s(&fo,"x:file1.txt","r");

	if(fo==NULL){
		printf("ファイルが存在しません");
	}else{
		printf("コピーするデータ:");
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
