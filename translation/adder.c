#include<stdio.h>
#include<stdlib.h>
#include"csyntax.c"

typedef Closure fun_Closure_int(int x);
typedef int fun_int_int_Environment(int y, Environment env);

int adder_fun(int y, Environment env){
int result;
int x = (int) env[0];
result = x + y;
return result;
}

Closure make_adder_fun(int x){
Closure result;
Environment adder_env = malloc(1 * sizeof(void*));
if(adder_env == NULL){
printf("Error allocating memory for environment\n");
exit(-1);
}
adder_env[0] = x;
Closure adder = { (Function)adder_fun, adder_env };
result = adder;
return result;
}

int main(){
int Ti883 = 3;
Closure Tf884 = make_adder_fun(Ti883);
int Ti885 = 7;
int Ti886 = ((fun_int_int_Environment*)Tf884.f)(Ti885, Tf884.env);
printf("%d", Ti886);
int ans = 1;
return ans;
}
