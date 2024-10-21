
#include "include/list.h"

int main(int arg_count,char *args[]) {
    if (arg_count>1){
        List simlpeList;
        simlpeList.name = string(args[1]);
        simlpeList.print_menu();
    }
    else{
        cout<<"Username not supplied.. exisitng the program"<<endl;
    }
    return 0;
    
}

