#include <stdio.h>
#include <string.h>
int main(){
	char data[100];
	char* ptr;
	ptr = data;
	printf("Enter the frame data: ");
	scanf("%s", data);
	printf("Sending data.....\n");
	
	int flag = 1;
	int i;
	for(i=0;i<strlen(data);i++){
		if(data[i] == '1' || data[i] == '0'){
			flag  = 1;
		}
		else{
			flag = 0;
		}
		
	}
	
	int sz = 0;
	sz = (strlen(ptr) / sizeof(data[0])) / 8;
	
	
	if(flag){
		printf("Received %d bytes of data.\n", sz);
	}else{
		printf("Invalid frame data.\n");
	}
	
	
}
