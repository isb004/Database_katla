#include<stdio.h>
#include<string.h>
int checkCRC(const char* data,char *divisor,char *temp){
    int data_Len=strlen(data);
    int div_Len=strlen(divisor);
    strcpy(temp,data);
    temp[data_Len]='\0';
    for(int i=0;i<data_Len-div_Len;i++){
        if(temp[i]=='1')
        {
            for(int j=0;j<div_Len;j++)
            {
                temp[i+j]=(temp[i+j]==divisor[j])?'0':'1';
            }
        }
    }
  //all zero checking
  for(int i=data_Len-div_Len+1;i<data_Len;i++){
    if(temp[i]!='0')
    return 0;
  }
  return 1;

}
int main(){
    char data[]="11010001";
    char divisor[]="1101";
    char temp[100];
    int isValid=checkCRC(data,divisor,temp);
    if(isValid)
    printf("Katla vaja");
    else
    printf("Allname vaja");
}