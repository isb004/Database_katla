#include<stdio.h>
#include<string.h>
void encodeWithParity(const char *data,char parity_type){
    int one_count=0;
    for(int i=0;i<strlen(data);i++)
    {
        if(data[i]=='1')
        one_count++;
        
    }
    char parity_bit;
    if(parity_type=='E'|| parity_type=='e')
        {
            parity_bit=(one_count%2==0)?'0':'1';
        }
    else if(parity_type=='O'||parity_type=='o')
        {
            parity_bit=(one_count%2==0)?'1':'0';
        }
    else
        printf("Invalid Parity type! Please try again");
    //Display the encoded data
    printf("Original Data: %s\n",data);
    printf("Parity bit: %c\n",parity_bit);
    printf("Encoded data: %s%c",data,parity_bit);
    
}
int main(){
    char data[]="10110";
    char parity_type;
    printf("Enter the parity type\nE. Even\nO. Odd\n");
    scanf("%c",&parity_type);
    encodeWithParity(data,parity_type);
}
