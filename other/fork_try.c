
#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

void printMsg(pid_t process){
	if(process > 0){
		printf("Common as parent!\n"); 
	}else{
		printf("Common as child!\n"); 
	}
}

int main() 
{ 
  
  	printf("Hello from parent before!\n"); 

    // make two process which run same 
    // program after this instruction 
    pid_t pid = fork(); 
    
    if(pid < 0 ){
    	fprintf(stderr, "Fork Failed" ); 
		return 1; 
    }else if(pid > 0){
    	printf("Hello from parent after!\n");
    }else{
    	printf("Hello from child!\n"); 
    }
  	
  	printMsg(pid);

    return 0; 
} 
