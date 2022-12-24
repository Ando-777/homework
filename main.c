#include <stdio.h> 
#include <pthread.h> 
 
void* Print(void* arg){ 
 printf("%i\n", *(int *)arg); 
 return 0; 
} 
 
int main() { 
 pthread_t a1, a2, a3, a4; 
 int args[] = {0, 1, 2, 3}; 
  
 pthread_create(&a1, NULL, Print, &args[0]); 
 pthread_create(&a2, NULL, Print, &args[1]); 
 pthread_create(&a3, NULL, Print, &args[2]); 
 pthread_create(&a4, NULL, Print, &args[3]); 
 
 pthread_join(a1, NULL); 
 pthread_join(a2, NULL); 
 pthread_join(a3, NULL); 
 pthread_join(a4, NULL); 
 
 printf("Finished"); 
 
}