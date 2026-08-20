/*
Name :Ricco
UID : 2605017
Roll No : 17
AOP Practical assigment by Ricco :D
*/

// program starts from here :D
// you'll ofc need to import input output and header files :D

#include <stdio.h>

// this is the main function lol :D
int main() {
  char donorName[25];
  // this is the place where the name is stored
  // had to make the char to be 25 characters long cuz like it was only
  // printing single char:D
  printf("Name: \n");
  // had to use %s cuz %c only prints single character :D
  // also had to not use & cuz %s is a string :D
  scanf("%s", donorName);

  // here the name is taken from the user via scanf :D
  int donorAge;
  // this is the place where the age is stored :D
  printf("Age: \n");
  scanf("%d", &donorAge);

  int donorWeight;
  // this is the place where the weight is stored :D
  printf("Weight: \n");
  scanf("%d", &donorWeight);
  // here the weight is taken from the user via scanf :D
  float donorHemoglobinLevel;
  // this is the place where the hemoglobin level is stored :D
  printf("Hemoglobin Level: \n");
  scanf("%f", &donorHemoglobinLevel);
  // here the real logical stuff takes place according to the problem statment
  // requirements :D
  // here comparision takes place and then only the output is shown :D
  if ((donorAge >= 18 && donorAge <= 60) && donorWeight >= 50 &&
      donorHemoglobinLevel >= 12.5) {
    // prints this if the condition is true :D
    printf("Blood Donation Status\n");
    printf("Donor Name: %s\n", donorName);
    printf("Eligibity: Eligible for blood Donation\n");
  } else {
    // prints this if the condition is false :D
    printf("Blood Donation Status\n");
    printf("Donor Name: %s\n", donorName);
    printf("Eligibity: Not Eligible for blood Donation\n");
  }
  // finally program ends here :D
  return 0;
}
