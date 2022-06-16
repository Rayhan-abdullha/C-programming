// #include <stdio.h>

// // == 1 ==//
// int main() {
//     char name[] = "Alexndra Abramov";
//     char date[] = "July 14, 1975";
//     char mobile[] = "99-9999999";

//     printf("Name :%s\n", name);
//     printf("DOB :%s\n", date);
//     printf("Moblie :%s", mobile);
//     return 0;
// }

// // == 2 ==//
// int main() {
//     int first, second;
//     printf("Input the first interger: ");
//     scanf("%d", &first);

//     printf("Input the second interger: ");
//     scanf("%d", &second);

//     int total = first * second;
//     printf("Product of the above two integers = %d", total);
//     return 0;
// }

// // == 3 ==//
// int main() {
//     int first, second;
//     printf("first number: ");
//     scanf("%d", &first);

//     printf("second number: ");
//     scanf("%d", &second);

//     int sum = first + second;
//     int difference = first - second;
//     int product = first * second;
//     int quotient = first / second;
//     int mod = first % second;

//     printf("sum = %d\n", sum);
//     printf("Difference = %d\n", difference);
//     printf("Product = %d\n", product);
//     printf("Quotient = %d\n", quotient);
//     printf("Modulus = %d", mod);
//     return 0;
// }

// // == 4 ==//
// int main() {
//     int principle, time;
//     double rate;

//     printf("Enter principle: ");
//     scanf("%d", &principle);

//     printf("Enter time: ");
//     scanf("%d", &time);

//     printf("Enter rate: ");
//     scanf("%lf", &rate);

//     double interest = (double)principle * (double)time * rate / 100 ;
//     double total = principle + (double)interest;

//     printf("Simple Interest = %lf\n", interest);
//     printf("Principal + Interest = %.1lf", total);
//     return 0;
// }

// // == 5 ==//
// int main()
// {
//     float num;

//     printf("Enter a number: ");
//     scanf("%f", &num);

//     int num_integer = (int)num;
//     float num_decimal = num - num_integer;

//     printf("Integer part: %d, Decimal part: %.3f\n", num_integer, num_decimal);

//     return 0;
// }

// // == 6 ==//
// int main() {
//     int total_work_hours_of_a_mounth;
//     int per_hour_salary;
//     scanf("%d %d", &total_work_hours_of_a_mounth, &per_hour_salary);

//     double salary = (double)total_work_hours_of_a_mounth * (double)per_hour_salary;
//     printf("Salary = %.2lf", salary);

//     return 0;
// }

// // == 7 ==//
// int main() {
//     float celsius, fahrenheit;
 
//     printf("Please Enter temperature in Celsius: ");
//     scanf("%f", &celsius);
 
//     // Convert the temperature
//     fahrenheit = (celsius * 9) / 5 + 32;
//     printf("Temperature is Fahrenheit = %.1f F", fahrenheit);
 
//     return 0;
// }

// // == 8 ==//
// int main() {
//     float degree_fahrenheit, celsius;
 
//     printf("Please Enter temperature in fahrenheit: ");
//     scanf("%f", &degree_fahrenheit);
 
//     // Convert the temperature
//     celsius = (degree_fahrenheit - 32) * 5 / 9;
//     printf("Temperature is Fahrenheit = %.2f C", celsius);
 
//     return 0;
// }

// // == 9 ==//
// int main() {
//     printf("Input no. of days: ");
//     int days, year, mounth;
//     scanf("%d", &days);

//     // find year
//     year = days / 365;

//     // find mounth
//     mounth = days - (365 * year);
//     int mounth1 = mounth / 30;

//     // find days
//     int days1 = mounth % 30;


//     printf("%d Years\n%d Mounth\n%d Days", year, mounth1, days1);
//     return 0;
// }

// // == 10 ==//
// int main() {
//     float weight, weight1, item, item1;
//     printf("Weight - Item1: ");
//     scanf("%f", &weight);

//     printf("No. of item1: ");
//     scanf("%f", &item);

//     printf("Weight - Item1: ");
//     scanf("%f", &weight1);

//     printf("No. of item1: ");
//     scanf("%f", &item1);

//     float total_values = (weight * 5) + (weight1 * 4);
//     float avg = total_values / 9;

//     printf("%f", avg);
//     return 0;
// }





// problem
// #include <stdio.h>
// int main() {
//     int harry, larry;
//     scanf("%d %d", &harry, &larry);

//     int temp = harry;
//     int temp2 = larry;
//     harry = temp2 - 1;
//     larry = temp - 1;
//     printf("%d %d", harry, larry);

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a, b, h;
//     scanf("%d %d %d", &a, &b, &h);

//     int area = (a + b) * h / 2;
//     printf("%d", area);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     printf("Hello World!");
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int H, W;
//     scanf("%d %d", &H, &W);
//     int h, w;
//     scanf("%d %d", &h, &w);
//     H -= h;
//     W -= w;
//     int uncolored = H * W;

//     printf("%d", uncolored);
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

int main () {
    int a, b;
    scanf("%d, %d", &a, &b);
    if (b != 0) {
        if(a % b == 0 ) {
            printf("%d %d", a ," is divisible by ", b);
        } else {
            printf("%d %d", a , " is not divisible by ", b);
        }
    } else {
        printf("You canot divide by 0");
    }
    return 0;
}