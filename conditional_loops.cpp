#include <iostream>
using namespace std ;
int main(){
//Print age program    
// int age ;
// cout << "Enter your age : " ; 
// cin >> age ;
// cout << "Your age is : " << age ;
// return 0 ;

// conditinal program
// int age ;
// cout << "Enter your age : "; 
// cin >> age ;
// if (age >= 18){
// cout << "You are eligible for id card\n"  ;
// }
// else{
//     cout << "You are not eligible for id card\n"  ;
// }

//uppercase/lowercase program
// char ch ;
// cout << "Enter any charactar : "; 
// cin >> ch ;
// if (ch >= 'a' && ch <= 'z'){
// cout << "Lowercase\n"  ;
// }
// else if (ch >= 'A' && ch <= 'Z'){
//  cout << "Uppercase\n"  ;
// }
// else{
//     cout << "Write just a to z or A to Z\n"  ;
// }

// // uppercase/lowercase program (in numbers)
// char ch ;
// cout << "Enter any charactar : "; 
// cin >> ch ;
// if (ch >= 97  && ch <= 122){
// cout << "Lowercase\n"  ;
// }
// else if (ch >= 65 && ch <= 90){
//  cout << "Uppercase\n"  ;
// }
// else{
//     cout << "Write just a to z or A to Z\n"  ;
// }

// Ternary Opt (check positive/negetive program)
// int num ;
// cout << "Enter any postive or negative number : "; 
// cin >> num;
// // num >= 0 ? cout << "Positive" : cout << "Negative" ;
// // or
// cout << (num >= 0 ? "Positive" : "Negative" ) ;

//loops
// while loop
// int n = 10;
// int count = 1;
// while(count <= n){
// cout << count << endl ;
// count++;
// }
// cout << endl; //for gap between next cammand

//reverse loop
// int n = 1;
// int count = 10;
// while(count >= n){
// cout << count << endl ;
// count--;
// }
// cout << endl; //for gap between next cammand

//for loop
// for (int i = 1 ; i<=10 ; i ++){
//     cout << i << " ";
// }
// cout << endl;

//Q : sum of numbers fron 1 to n 
// int n = 10;

// int sum = 0 ;
// for(int i = 1 ; i <= n ; i++ ){
// sum += i ;
// //break statement
// if (i == 5){
//     break;
// }
// }
// cout << "sum = " << sum ;

//Q : sum of all odd numbers
// int n = 7 ; 
// int oddSum = 0 ;
// for (int i = 1 ; i<= n ; i++){
//     if(i%2 != 0){
//  oddSum += i  ;
//     }

// }
// cout << "Odd sum = " <<  oddSum << endl ; 

//do while loop
//The do-while loop is a control flow statement in programming that repeatedly executes a block of code as long as a specified condition is true. Unlike the while loop, the do-while loop guarantees that the block of code is executed at least once, even if the condition is false from the beginning.
//Syntax
//do {
    // Code to execute
//} while (condition);
//
// do{
//     cout << "hello world";
// } while (3>5);

//Q : print 1 to 10 in do while loop
// int n = 10 ;
// int i = 1 ;
// do {
// cout << i ;
// i++;
// }while (i <= n);
return 0 ;
}