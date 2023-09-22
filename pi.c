#include <stdio.h>
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>   /* 時間相關函數 */

int main(){
  long long int num_in_circle = 0; //initial to 0
  long long int num_of_tosses = (int)(1.0e+009); //選擇我想要丟的次數
  int x_positive = 0;
  int y_positive = 0;
  srand(15);
 

  for ( int toss = 0; toss < num_of_tosses; toss ++) {
      double x =((double)rand() *2 / (RAND_MAX + 1.0)) -1 ;
      double y =((double)rand() *2 / (RAND_MAX + 1.0)) -1 ;
      
      double distance_squared = x * x + y * y;
      // printf("x=%f, y=%f  distance_squared=%f\n",x,y,distance_squared );
      if ( distance_squared <= 1){ 
        num_in_circle++;
      }
      if(x>0) x_positive++;
      if(y>0) y_positive++;
  }
  // printf("x_positive++=%d, y_positive++=%d\n",x_positive++,y_positive++);
  // printf("num_in_circle = %lld\n",num_in_circle);
  double pi_estimate = 4 * num_in_circle /((double)num_of_tosses);
  printf("%f\n",pi_estimate);
}
