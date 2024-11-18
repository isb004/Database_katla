#include<stdio.h>
#include<string.h>
void check_Parity(const char *data, char parity_type){
    int one_count;
    for(int i=0;i<strlen(data);i++){
        if(data[i]=='1')
        one_count++;
    }
    int valid=0;
    if(parity_type=='E'|| parity_type=='e'){
        valid=(one_count%2==0);
        printf("Checking with even parity");
    }
    else if(parity_type=='O'|| parity_type=='o'){
        valid=(one_count%2==1);
    }
    else
    printf("Wrong input");
    printf("Data with parity was %s",data);
    if(valid)
    printf("Data valid");
    else
    printf("Data invalid");

}
int main(){
    char datawithparity[]="110101110";
    char parity_type;
    printf("Enter the parity type: E/e for Even O/o for Odd\n");
    scanf("%c",&parity_type);
    check_Parity(datawithparity,parity_type);
}