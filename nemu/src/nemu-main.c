#include <common.h>
#define TEST_NUM 10 

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
word_t expr(char *e, bool *success);

int main(int argc, char *argv[]) {
  /*
  // Initialize the monitor.
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  // Start engine. 
  engine_start();

  return is_exit_status_bad();
  */


  FILE *fp=NULL;
  fp = fopen("./input","r");
  char buff[255];
  int a=0,b=0;
  word_t result=0;
    a = fscanf(fp, "%ld", &result);
    b = fscanf(fp, "%s" , buff);
    if(a==EOF || b==EOF) ; 
    else
      printf("%s==%ld\n",buff,result);
    
/*
  bool success = true;

  for(int i=0; i<TEST_NUM; i++) {
    a = fscanf(fp, "%ld", &result);
    b = fscanf(fp, "%s" , buff);
    if(a==EOF || b==EOF) continue;

   if(result==expr(buff,&success)) {
     if(success == true)
       printf("success\n");
   
     else {
      printf("error\n");
     }
   }
  }
*/
  fclose(fp);
  return 0;
}
