#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void proboy(){
srand(time(0));
long long n;
printf("insert sample space\n");
scanf("%lld",&n);
float one = 0;
float two = 0;
float thre = 0;
for (long long i=0;i<n;i++){
int k = rand();
float p=((float)k/RAND_MAX);	
printf("%d,%f \n",k,p);
if((p)<0.333333){
one=one+1;
}
else if((p)>0.33333 && p<0.666666){
two=two + 1;
}
else if(p>0.666666){ 
thre=thre +1;
}
}
printf("%f,%f, and %f \n", one/n,two/n,thre/n);

}

int main(){
proboy();

}
