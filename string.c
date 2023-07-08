// Q-47:- Creat a string firstname and lastname to store details of user & print all the characters using loop.

void printstring(char arr[]);

int main(){
    char firstname[]= "Utsab    ";
    char lastname[]= "Haldar\n";

    printstring(firstname);
    printstring(lastname);
    return 0;
}

void printstring(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}