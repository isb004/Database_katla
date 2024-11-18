#include<stdio.h>
#include<string.h>
void find_CRC(const char *data,char *divisor,char *temp,char *crc){
    int data_length=strlen(data);
    int div_length=strlen(divisor);
    strcpy(temp,data);
    temp[data_length-1]='\0';
    //appending zeros
    for(int i=0;i<div_length;i++)
    {
        temp[data_length+i]='0';
    }
    temp[data_length+div_length-1]='\0';
    //XOR operation 
    for(int i=0;i<data_length;i++)
    {
        if(temp[i]=='1'){
            for(int j=0;j<div_length;j++){
                temp[i+j]=(temp[i+j]==divisor[j])?'0':'1';
            }
        }
    }
    strncpy(crc,temp+data_length,div_length-1);
    crc[div_length-1]='\0';

}


int main()
{
    char data[]="1001010";
    char divisor[]="1101";
    char temp[100],crc[100];
    find_CRC(data,divisor,temp,crc);
    strcat(data,crc);
    printf("%s",data);
}
    

