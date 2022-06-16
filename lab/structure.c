// #include <stdio.h>
// #include <stdlib.h>

// int* makeCopy(int t, int arr[]) {
//     int *out = (int *) malloc(t*sizeof(int));
//     for (int i = 0; i < t; i++)
//     {
//         out[i] = arr[i];
//     }
//     return out;
// }

// int main() {
//     int t, arr[t];
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int *out = makeCopy(t, arr);

//     for (int i = 0; i < t; i++) {
//         printf("%d\n", out[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>

// struct Date{
//     int day, month, year;
// };

// struct Date isfristDay(int year) {
//     struct Date ans = {1, 1, year};
//     return ans;
// };

// void printfDate(struct Date date) {
//     printf("%d-%d-%d", date.day, date.month, date.year);
// }

// int main(){
//     struct Date date = isfristDay(2022);
//     printfDate(date);
//     return 0;
// }


// #include<stdio.h>
// #include<stdbool.h>

// struct Date{
//     int day, month, year;
// };

// struct Student{
//     char *name;
//     int roll;
//     int class;
//     struct Date dob;
// };
// void printfDate(struct Date date) {
//     printf("Date: %d-%d-%d\n", date.day, date.month, date.year);
// }

// void printfStudentInfo(struct Student student) {
//     printf("name: %s\nroll: %d\nclass: %d\n", student.name, student.roll, student.class);
//     printfDate(student.dob);
// }

// int main(){
//     struct Student student = {
//         .roll = 1,
//         .class = 9,
//         .dob = {1, 1, 3},
//         .name = "coder rayhan is a good student",
//     };
    
//     printfStudentInfo(student);
//     return 0;
// }


// #include <stdio.h>

// struct Result{
//     int vagfol;
//     int vagsesh;
// };

// struct Result divide(int a, int b){
//     struct Result result;
//     result.vagfol = a / b;
//     result.vagsesh = a % b;
//     return result;
// }

// void displayResult(struct Result result) {
//     printf("Vagfol: %d\nVagsesh: %d", result.vagfol, result.vagsesh);
// }

// int main() {
//     int a = 100, b = 10;
//     struct Result result = divide(a,b);
//     displayResult(result);
//     return 0;
// }


// #include<stdio.h>
// #include <stdbool.h>
// #include<stdlib.h>

// struct ArrayHolder{
//     int arr[100];
// };

// struct ArrayHolder makeArry(int n) {
//     struct ArrayHolder bob;
//     for (int i = 0; i < n; i++) {
//         bob.arr[i] = i+1;
//     }
//     return bob;
// }
// void printArr(int n, int arr[]) {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
    
// }
// int main() {
//     int n = 10;
//     struct ArrayHolder ans = makeArry(n);
//     printArr(n, ans.arr);
// }

// #include<stdio.h>

// struct Fraction{
//     int a, b;
// };

// void print(struct Fraction frac) {
//     printf("%d/%d", frac.a, frac.b);
// }

// int main() {
//     struct Fraction half = {2, 3};
//     print(half);
// }