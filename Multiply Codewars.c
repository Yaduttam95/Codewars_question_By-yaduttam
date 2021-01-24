/*
         QUESTION
This code is not functioning properly 
correct it.........         
int multiply(int a, int b) {
  return a b;
}*/

/*
         SAMPLE TEST CASE
#include <criterion/criterion.h>
int multiply(int, int);

Test(ExampleTests, should_pass_all_the_tests_provided) {
    cr_assert_eq(multiply(5, 6), 30);
    cr_assert_eq(multiply(12, 12), 144);
}*/    

/*
         TEST CASE
#include <criterion/criterion.h>
#include <time.h>
#include <stdlib.h>
int multiply(int, int);

Test(BasicTests, should_pass_all_the_tests_provided) {
    cr_assert_eq(multiply(1, 1), 1);
    cr_assert_eq(multiply(3, 2), 6);
}

Test(RandomTests, should_pass_all_the_tests_provided) {
  srand(time(NULL));
  int j, k;
  for (int i = 0; i < 1000; i++) {
    j = rand();
    k = rand();
    cr_assert_eq(multiply(j, k), j*k);
  }
}*/		      


/*int multiply(int a, int b) {
  return (a*b);
}*/


/*
int multiply(int a, char *b) {
  return a * ((int) b);
}*/


/*
int multiply(int a, int b) {
  int res = 0;
  for (;;) {
    if (!a || !b) break;
    if (a & 1) {
      res += b;
      --a;
    }
    a >>= 1;
    b <<= 1;
  }
  return res;
}*/
